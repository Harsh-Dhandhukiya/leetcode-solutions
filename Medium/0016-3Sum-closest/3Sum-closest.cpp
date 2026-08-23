class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        // Sort the array to use the two-pointer approach
        sort(nums.begin(), nums.end());
        
        // Initialize the closest sum with the sum of the first three elements
        int closest_sum = nums[0] + nums[1] + nums[2];
        
        for (int i = 0; i < nums.size() - 2; ++i) {
            int left = i + 1;
            int right = nums.size() - 1;
            
            while (left < right) {
                int current_sum = nums[i] + nums[left] + nums[right];
                
                // If the exact target is found, return it immediately
                if (current_sum == target) {
                    return current_sum;
                }
                
                // Update closest_sum if the current_sum is closer to the target
                if (abs(current_sum - target) < abs(closest_sum - target)) {
                    closest_sum = current_sum;
                }
                
                // Move pointers based on how current_sum compares to target
                if (current_sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        
        return closest_sum;
    }
};