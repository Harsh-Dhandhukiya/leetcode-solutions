class Solution {
public:
    void backtrack(vector<int>& candidates, int target, int start, vector<int>& current, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(current);
            return;
        }
        
        for (int i = start; i < candidates.size(); ++i) {
            // Skip duplicates to ensure unique combinations
            if (i > start && candidates[i] == candidates[i - 1]) continue;
            
            // Optimization: stop early if the current element exceeds the remaining target
            if (candidates[i] > target) break;
            
            current.push_back(candidates[i]);
            // Move to the next index (i + 1) since each element can only be used once
            backtrack(candidates, target - candidates[i], i + 1, current, result);
            current.pop_back(); // Backtrack
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        // Sort first so we can easily skip duplicates and optimize the search
        sort(candidates.begin(), candidates.end());
        
        vector<vector<int>> result;
        vector<int> current;
        
        backtrack(candidates, target, 0, current, result);
        
        return result;
    }
};