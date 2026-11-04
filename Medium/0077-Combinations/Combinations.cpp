class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> current;
        backtrack(1, n, k, current, result);
        return result;
    }

private:
    void backtrack(int start, int n, int k, vector<int>& current, vector<vector<int>>& result) {
        // Base case: If the current combination is of size k, add it to the result
        if (current.size() == k) {
            result.push_back(current);
            return;
        }
        
        // Loop through the remaining numbers. 
        // Optimization: i <= n - (k - current.size()) + 1 prunes unnecessary branches 
        // when there aren't enough numbers left to form a combination of size k.
        for (int i = start; i <= n - (k - current.size()) + 1; ++i) {
            current.push_back(i);          // Make a choice
            backtrack(i + 1, n, k, current, result); // Recurse
            current.pop_back();            // Undo the choice (backtrack)
        }
    }
};