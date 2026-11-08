class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        
        // Iterate through every cell in the grid
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                // Start DFS if the first character matches
                if (dfs(board, word, i, j, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
    
private:
    bool dfs(vector<vector<char>>& board, string& word, int i, int j, int index) {
        // If we have matched all characters in the word, return true
        if (index == word.length()) {
            return true;
        }
        
        // Check boundaries and if the current character matches the word's character
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[index]) {
            return false;
        }
        
        // Temporarily mark the current cell as visited to prevent reuse
        char temp = board[i][j];
        board[i][j] = '#'; 
        
        // Explore all 4 adjacent directions (down, up, right, left)
        bool found = dfs(board, word, i + 1, j, index + 1) ||
                     dfs(board, word, i - 1, j, index + 1) ||
                     dfs(board, word, i, j + 1, index + 1) ||
                     dfs(board, word, i, j - 1, index + 1);
        
        // Backtrack: Restore the cell's original value
        board[i][j] = temp; 
        
        return found;
    }
};