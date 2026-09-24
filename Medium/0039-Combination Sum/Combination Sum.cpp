class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        backtrack(candidates, target, 0, 0, current, result);
        return result;
    }

private:
    void backtrack(const vector<int>& candidates, int target, int sum, int start, vector<int>& current, vector<vector<int>>& result) {
        // Base case 1: If the current sum exactly matches the target, record the valid combination
        if (sum == target) {
            result.push_back(current);
            return;
        }
        
        // Base case 2: If the current sum exceeds the target, stop exploring this path
        if (sum > target) {
            return;
        }

        // Explore all available candidates starting from the current index
        for (int i = start; i < candidates.size(); ++i) {
            // Choose the current candidate
            current.push_back(candidates[i]);
            
            // Explore further (pass 'i' instead of 'i + 1' because candidates can be reused)
            backtrack(candidates, target, sum + candidates[i], i, current, result);
            
            // Backtrack: remove the last chosen candidate to try the next one
            current.pop_back();
        }
    }
};