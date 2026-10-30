class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        // If the starting or ending cell is an obstacle, no paths exist.
        if (obstacleGrid[0][0] == 1 || obstacleGrid[m - 1][n - 1] == 1) {
            return 0;
        }
        
        // Use long long to avoid potential integer overflow on intermediate paths 
        // that might eventually be blocked by an obstacle.
        vector<long long> dp(n, 0);
        dp[0] = 1; // Base case: 1 path to the starting cell
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (obstacleGrid[i][j] == 1) {
                    // Obstacle found, no paths can go through here
                    dp[j] = 0;
                } else if (j > 0) {
                    // Paths to current cell = paths from above (dp[j]) + paths from left (dp[j-1])
                    dp[j] += dp[j - 1];
                }
            }
        }
        
        return dp[n - 1];
    }
};