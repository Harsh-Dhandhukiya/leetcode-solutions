class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {findBound(nums, target, true), findBound(nums, target, false)};
    }
    
private:
    int findBound(vector<int>& nums, int target, bool isFirst) {
        int left = 0;
        int right = nums.size() - 1;
        int bound = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                bound = mid; // Record the index
                if (isFirst) {
                    right = mid - 1; // Target found, but look for an earlier occurrence
                } else {
                    left = mid + 1;  // Target found, but look for a later occurrence
                }
            } else if (nums[mid] > target) {
                right = mid - 1; // Target is in the left half
            } else {
                left = mid + 1;  // Target is in the right half
            }
        }
        
        return bound;
    }
};