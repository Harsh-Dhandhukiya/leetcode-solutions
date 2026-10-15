class Solution {
public:
    int totalNQueens(int n) {
        int count = 0;
        // Arrays to keep track of attacked columns and diagonals
        vector<bool> cols(n, false);
        vector<bool> diag1(2 * n, false); // Tracks row + col
        vector<bool> diag2(2 * n, false); // Tracks row - col + n
        
        backtrack(0, n, cols, diag1, diag2, count);
        return count;
    }
    
private:
    void backtrack(int row, int n, vector<bool>& cols, vector<bool>& diag1, vector<bool>& diag2, int& count) {
        // If we successfully placed a queen in all rows, we found a valid solution
        if (row == n) {
            count++;
            return;
        }
        
        // Try placing a queen in each column of the current row
        for (int col = 0; col < n; col++) {
            int d1 = row + col;
            int d2 = row - col + n;
            
            // Skip if the column or either diagonal is already under attack
            if (cols[col] || diag1[d1] || diag2[d2]) continue;
            
            // Place the queen and mark the column and diagonals as attacked
            cols[col] = diag1[d1] = diag2[d2] = true;
            
            // Move to the next row
            backtrack(row + 1, n, cols, diag1, diag2, count);
            
            // Backtrack: remove the queen and unmark the column and diagonals
            cols[col] = diag1[d1] = diag2[d2] = false;
        }
    }
};