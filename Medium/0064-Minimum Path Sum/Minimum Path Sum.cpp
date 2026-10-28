class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // Top-left corner (starting point)
                if (i == 0 && j == 0) {
                    continue; 
                } 
                // First row: can only come from the left
                else if (i == 0) {
                    grid[i][j] += grid[i][j - 1];
                } 
                // First column: can only come from above
                else if (j == 0) {
                    grid[i][j] += grid[i - 1][j];
                } 
                // General case: take the minimum of the top or left path
                else {
                    grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]);
                }
            }
        }
        
        // The bottom-right corner contains the minimum path sum
        return grid[m - 1][n - 1];
    }
};