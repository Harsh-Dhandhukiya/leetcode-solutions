class Solution {
public:
    bool isNumber(string s) {
        bool seenDigit = false;
        bool seenExponent = false;
        bool seenDot = false;
        
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            
            if (isdigit(c)) {
                seenDigit = true;
            } 
            else if (c == '+' || c == '-') {
                // Sign must be the first char or directly after 'e' or 'E'
                if (i > 0 && s[i - 1] != 'e' && s[i - 1] != 'E') {
                    return false;
                }
            } 
            else if (c == 'e' || c == 'E') {
                // Exponent must not have been seen, and must follow a digit
                if (seenExponent || !seenDigit) {
                    return false;
                }
                seenExponent = true;
                seenDigit = false; // Reset to enforce digits after the exponent
            } 
            else if (c == '.') {
                // Dot must not have been seen, and cannot appear after an exponent
                if (seenDot || seenExponent) {
                    return false;
                }
                seenDot = true;
            } 
            else {
                // Any other character is invalid
                return false;
            }
        }
        
        return seenDigit;
    }
};