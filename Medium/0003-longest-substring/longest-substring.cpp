class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Create an array to store the last seen index of each character.
        // We use 128 to cover all standard ASCII characters.
        // Initialize all values to -1 (meaning not seen yet).
        vector<int> char_index(128, -1);
        
        int max_len = 0;
        int left = 0;
        
        for (int right = 0; right < s.length(); ++right) {
            char current_char = s[right];
            
            // If we have seen the character and it is within our current window,
            // we move the left pointer to the right of its last occurrence.
            if (char_index[current_char] >= left) {
                left = char_index[current_char] + 1;
            }
            
            // Update the last seen index of the current character
            char_index[current_char] = right;
            
            // Update the maximum length found so far
            max_len = max(max_len, right - left + 1);
        }
        
        return max_len;
    }
};