#include <string>
#include <vector>

class Solution {
public:
    std::string intToRoman(int num) {
        // Define the mapping of values to Roman numeral symbols in descending order
        std::vector<std::pair<int, std::string>> valSymbols = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };
        
        std::string result = "";
        
        // Greedily append symbols while subtracting their values
        for (const auto& [val, sym] : valSymbols) {
            while (num >= val) {
                result += sym;
                num -= val;
            }
        }
        
        return result;
    }
};