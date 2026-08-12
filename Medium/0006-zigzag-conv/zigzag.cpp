#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::string convert(std::string s, int numRows) {
        // If there's only 1 row or the string is shorter than the number of rows, 
        // the zigzag pattern is just the string itself.
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }

        // Create a vector of strings to hold each row. 
        // We only need as many rows as the string length or numRows.
        std::vector<std::string> rows(std::min(numRows, int(s.length())));
        
        int currRow = 0;
        bool goingDown = false;

        // Iterate through each character in the string
        for (char c : s) {
            rows[currRow] += c;
            
            // Change direction when hitting the top or bottom row
            if (currRow == 0 || currRow == numRows - 1) {
                goingDown = !goingDown;
            }
            
            // Move to the next row
            currRow += goingDown ? 1 : -1;
        }

        // Combine all rows into a single string
        std::string result;
        for (const std::string& row : rows) {
            result += row;
        }
        
        return result;
    }
};