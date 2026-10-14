class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        
        // Arrays to keep track of attacked columns and diagonals
        vector<bool> cols(n, false);
        vector<bool> mainDiag(2 * n - 1, false); // row - col + n - 1
        vector<bool> antiDiag(2 * n - 1, false); // row + col
        
        solve(0, n, board, ans, cols, mainDiag, antiDiag);
        
        return ans;
    }
    
private:
    void solve(int row, int n, vector<string>& board, vector<vector<string>>& ans, 
               vector<bool>& cols, vector<bool>& mainDiag, vector<bool>& antiDiag) {
        // Base case: If all queens are placed, add the board to the answer
        if (row == n) {
            ans.push_back(board);
            return;
        }
        
        // Try placing a queen in each column of the current row
        for (int col = 0; col < n; ++col) {
            int mdIdx = row - col + n - 1;
            int adIdx = row + col;
            
            // Check if it's safe to place the queen
            if (!cols[col] && !mainDiag[mdIdx] && !antiDiag[adIdx]) {
                // Place the queen
                board[row][col] = 'Q';
                cols[col] = true;
                mainDiag[mdIdx] = true;
                antiDiag[adIdx] = true;
                
                // Move to the next row
                solve(row + 1, n, board, ans, cols, mainDiag, antiDiag);
                
                // Backtrack: Remove the queen and explore other options
                board[row][col] = '.';
                cols[col] = false;
                mainDiag[mdIdx] = false;
                antiDiag[adIdx] = false;
            }
        }
    }
};