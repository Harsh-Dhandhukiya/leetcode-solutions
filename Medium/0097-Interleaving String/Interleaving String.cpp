class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int m = s1.length(), n = s2.length();
        if (m + n != s3.length()) {
            return false;
        }

        // Ensure s2 is the shorter string to minimize space
        if (m < n) {
            return isInterleave(s2, s1, s3);
        }

        vector<bool> dp(n + 1, false);
        dp[0] = true;

        // Base case: using 0 characters from s1
        for (int j = 1; j <= n; ++j) {
            dp[j] = dp[j - 1] && (s2[j - 1] == s3[j - 1]);
        }

        // Fill row by row for s1[0 ... i - 1]
        for (int i = 1; i <= m; ++i) {
            dp[0] = dp[0] && (s1[i - 1] == s3[i - 1]);
            for (int j = 1; j <= n; ++j) {
                char target = s3[i + j - 1];
                bool fromS1 = dp[j] && (s1[i - 1] == target);
                bool fromS2 = dp[j - 1] && (s2[j - 1] == target);
                dp[j] = fromS1 || fromS2;
            }
        }

        return dp[n];
    }
};