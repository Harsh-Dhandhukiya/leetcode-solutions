class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";

        int start = 0;
        int maxLength = 1;

        // Lambda function to expand around a given center
        auto expandAroundCenter = [&](int left, int right) {
            while (left >= 0 && right < s.length() && s[left] == s[right]) {
                left--;
                right++;
            }
            // Length of the palindrome found
            return right - left - 1; 
        };

        for (int i = 0; i < s.length(); i++) {
            // Check for odd length palindromes (single character center)
            int len1 = expandAroundCenter(i, i);
            
            // Check for even length palindromes (two character center)
            int len2 = expandAroundCenter(i, i + 1);
            
            // Find the maximum length from both cases
            int len = max(len1, len2);

            // Update start index and max length if a longer palindrome is found
            if (len > maxLength) {
                maxLength = len;
                start = i - (len - 1) / 2;
            }
        }

        return s.substr(start, maxLength);
    }
};