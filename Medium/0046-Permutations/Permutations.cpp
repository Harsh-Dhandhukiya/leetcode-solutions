class Solution {
public:
    void backtrack(vector<int>& nums, int start, vector<vector<int>>& result) {
        // Base case: if we have reached the end of the array, add the current permutation
        if (start == nums.size()) {
            result.push_back(nums);
            return;
        }
        
        // Try swapping the current element with every other element
        for (int i = start; i < nums.size(); i++) {
            swap(nums[start], nums[i]);
            
            // Recurse for the next position
            backtrack(nums, start + 1, result);
            
            // Backtrack: undo the swap to try the next possibility
            swap(nums[start], nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        backtrack(nums, 0, result);
        return result;
    }
};