class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        
        // Traverse the string from right to left
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                length++; // Count characters of the last word
            } else if (length > 0) {
                break; // Stop once we hit a space after the word has started
            }
        }
        
        return length;
    }
};