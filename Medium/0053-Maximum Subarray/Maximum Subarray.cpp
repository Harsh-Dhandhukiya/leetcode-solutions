class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_max = nums[0];
        int global_max = nums[0];
        
        for (int i = 1; i < nums.size(); ++i) {
            // Decide whether to add the current element to the existing subarray 
            // or start a new subarray from the current element.
            current_max = max(nums[i], current_max + nums[i]);
            
            // Update the maximum sum encountered so far.
            if (current_max > global_max) {
                global_max = current_max;
            }
        }
        
        return global_max;
    }
};