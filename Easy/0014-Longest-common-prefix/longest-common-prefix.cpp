#include <vector>
#include <string>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) return "";
        
        // Iterate through the characters of the first string
        for (int i = 0; i < strs[0].length(); i++) {
            char c = strs[0][i];
            
            // Check this character against all other strings
            for (int j = 1; j < strs.size(); j++) {
                // If we reach the end of a string or find a mismatch
                if (i == strs[j].length() || strs[j][i] != c) {
                    // Return the substring up to the current index
                    return strs[0].substr(0, i);
                }
            }
        }
        
        // If we make it through all characters of the first string,
        // then the entire first string is the common prefix.
        return strs[0];
    }
};