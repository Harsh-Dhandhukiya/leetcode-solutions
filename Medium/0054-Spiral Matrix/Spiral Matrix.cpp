class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if (matrix.empty()) return res;
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        // Define boundaries
        int top = 0;
        int bottom = m - 1;
        int left = 0;
        int right = n - 1;
        
        while (top <= bottom && left <= right) {
            // Traverse from left to right along the top boundary
            for (int j = left; j <= right; ++j) {
                res.push_back(matrix[top][j]);
            }
            top++; // Move the top boundary down
            
            // Traverse from top to bottom along the right boundary
            for (int i = top; i <= bottom; ++i) {
                res.push_back(matrix[i][right]);
            }
            right--; // Move the right boundary left
            
            // Make sure we are now on a different row
            if (top <= bottom) {
                // Traverse from right to left along the bottom boundary
                for (int j = right; j >= left; --j) {
                    res.push_back(matrix[bottom][j]);
                }
                bottom--; // Move the bottom boundary up
            }
            
            // Make sure we are now on a different column
            if (left <= right) {
                // Traverse from bottom to top along the left boundary
                for (int i = bottom; i >= top; --i) {
                    res.push_back(matrix[i][left]);
                }
                left++; // Move the left boundary right
            }
        }
        
        return res;
    }
};