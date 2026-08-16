class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.length();
        int n = p.length();
        
        // dp[i][j] will be 'true' if the first i characters in given string s 
        // match the first j characters of pattern p.
        vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
        
        // Base case: empty string matches empty pattern
        dp[0][0] = true;
        
        // Base case: patterns like a*, a*b*, a*b*c* can match an empty string
        for (int j = 1; j <= n; ++j) {
            if (p[j - 1] == '*') {
                dp[0][j] = dp[0][j - 2];
            }
        }
        
        // Build the DP table bottom-up
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                // If characters match, or pattern has a dot
                if (p[j - 1] == s[i - 1] || p[j - 1] == '.') {
                    dp[i][j] = dp[i - 1][j - 1];
                } 
                // If pattern has a '*'
                else if (p[j - 1] == '*') {
                    // Scenario 1: Zero occurrences of the preceding character
                    dp[i][j] = dp[i][j - 2];
                    
                    // Scenario 2: One or more occurrences of the preceding character
                    if (p[j - 2] == s[i - 1] || p[j - 2] == '.') {
                        dp[i][j] = dp[i][j] || dp[i - 1][j];
                    }
                }
            }
        }
        
        return dp[m][n];
    }
};