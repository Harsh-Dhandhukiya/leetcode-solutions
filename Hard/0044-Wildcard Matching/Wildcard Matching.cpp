class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.length();
        int n = p.length();
        
        // dp[i][j] will be true if the first i characters in s 
        // match the first j characters in p.
        vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
        
        // Empty string and empty pattern match
        dp[0][0] = true;
        
        // Deals with patterns like "*", "**", "***" matching an empty string
        for (int j = 1; j <= n; j++) {
            if (p[j - 1] == '*') {
                dp[0][j] = dp[0][j - 1];
            }
        }
        
        // Fill the DP table
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (p[j - 1] == '?' || p[j - 1] == s[i - 1]) {
                    // Current characters match, carry over the match status from the previous characters
                    dp[i][j] = dp[i - 1][j - 1];
                } else if (p[j - 1] == '*') {
                    // '*' can match an empty sequence (dp[i][j-1]) 
                    // OR '*' can match the current character in s (dp[i-1][j])
                    dp[i][j] = dp[i][j - 1] || dp[i - 1][j];
                }
            }
        }
        
        return dp[m][n];
    }
};