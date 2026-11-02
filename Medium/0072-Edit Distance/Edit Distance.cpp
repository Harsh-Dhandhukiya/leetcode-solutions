#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    int minDistance(std::string word1, std::string word2) {
        int m = word1.length();
        int n = word2.length();
        
        // dp[i][j] will be the minimum operations to convert word1[0..i-1] to word2[0..j-1]
        std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1));
        
        // Base case: word2 is empty, so we must delete all characters from word1
        for (int i = 0; i <= m; i++) {
            dp[i][0] = i;
        }
        
        // Base case: word1 is empty, so we must insert all characters of word2
        for (int j = 0; j <= n; j++) {
            dp[0][j] = j;
        }
        
        // Fill the DP table
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (word1[i - 1] == word2[j - 1]) {
                    // Characters match, no operation needed
                    dp[i][j] = dp[i - 1][j - 1]; 
                } else {
                    // Characters differ, take the minimum of insert, delete, or replace
                    dp[i][j] = 1 + std::min({
                        dp[i][j - 1],    // Insert
                        dp[i - 1][j],    // Delete
                        dp[i - 1][j - 1] // Replace
                    });
                }
            }
        }
        
        return dp[m][n];
    }
};