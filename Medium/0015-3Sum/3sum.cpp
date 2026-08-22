class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        
        // Sort the array to easily handle duplicates and use the two-pointer technique
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size(); i++) {
            // Skip duplicate elements for the first element of our triplet
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            int left = i + 1;
            int right = nums.size() - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    // Skip duplicates for the second element
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    // Skip duplicates for the third element
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }
                    
                    // Move both pointers after finding a valid triplet
                    left++;
                    right--;
                } 
                else if (sum < 0) {
                    // We need a larger sum, move the left pointer to the right
                    left++;
                } 
                else {
                    // We need a smaller sum, move the right pointer to the left
                    right--;
                }
            }
        }
        
        return result;
    }
};