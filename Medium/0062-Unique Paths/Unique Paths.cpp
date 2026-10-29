class Solution {
public:
    int uniquePaths(int m, int n) {
        // Create a 1D array to store the number of paths for the current row
        vector<int> dp(n, 1);
        
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                // dp[j] is the cell above, dp[j-1] is the cell to the left
                dp[j] += dp[j - 1]; 
            }
        }
        
        return dp[n - 1];
    }
};