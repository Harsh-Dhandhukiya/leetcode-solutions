class Solution {
public:
    void backtrack(vector<int>& nums, vector<bool>& used, vector<int>& current, vector<vector<int>>& result) {
        // Base case: if the current permutation is the same size as nums, we've found a valid permutation
        if (current.size() == nums.size()) {
            result.push_back(current);
            return;
        }
        
        for (int i = 0; i < nums.size(); ++i) {
            // Skip if the element is already used in the current permutation
            if (used[i]) continue;
            
            // Skip duplicates: if the current element is the same as the previous one,
            // and the previous one was NOT used in the current path, it means we are 
            // about to create a duplicate permutation at this depth.
            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) {
                continue;
            }
            
            // Choose the current element
            used[i] = true;
            current.push_back(nums[i]);
            
            // Explore further
            backtrack(nums, used, current, result);
            
            // Backtrack: undo the choice
            current.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        vector<bool> used(nums.size(), false);
        
        // Sorting is crucial to easily skip duplicate elements side-by-side
        sort(nums.begin(), nums.end());
        
        backtrack(nums, used, current, result);
        
        return result;
    }
};