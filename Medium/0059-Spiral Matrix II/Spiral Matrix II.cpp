class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        
        int top = 0, bottom = n - 1;
        int left = 0, right = n - 1;
        int val = 1;
        
        while (left <= right && top <= bottom) {
            // Traverse from left to right along the top boundary
            for (int i = left; i <= right; i++) {
                matrix[top][i] = val++;
            }
            top++;
            
            // Traverse from top to bottom along the right boundary
            for (int i = top; i <= bottom; i++) {
                matrix[i][right] = val++;
            }
            right--;
            
            // Traverse from right to left along the bottom boundary
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    matrix[bottom][i] = val++;
                }
                bottom--;
            }
            
            // Traverse from bottom to top along the left boundary
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    matrix[i][left] = val++;
                }
                left++;
            }
        }
        
        return matrix;
    }
};