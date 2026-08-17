#include <string>
#include <unordered_map>

class Solution {
public:
    int romanToInt(std::string s) {
        // Map to store the values of each Roman numeral
        std::unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int total = 0;
        
        // Iterate through the string
        for (int i = 0; i < s.length(); i++) {
            // If the current value is less than the next value, we subtract it
            if (i + 1 < s.length() && roman[s[i]] < roman[s[i + 1]]) {
                total -= roman[s[i]];
            } 
            // Otherwise, we add it
            else {
                total += roman[s[i]];
            }
        }
        
        return total;
    }
};