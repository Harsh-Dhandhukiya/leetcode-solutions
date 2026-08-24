class Solution {
public:
    vector<string> letterCombinations(string digits) {
        // Handle edge case for empty input
        if (digits.empty()) {
            return {};
        }
        
        // Map digits 0-9 to their corresponding letters
        vector<string> pad = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        
        vector<string> result;
        string current_combo = "";
        
        // Start backtracking from index 0
        backtrack(digits, 0, current_combo, result, pad);
        
        return result;
    }
    
private:
    void backtrack(const string& digits, int index, string& current_combo, vector<string>& result, const vector<string>& pad) {
        // Base case: if the combination length matches the digits length
        if (index == digits.length()) {
            result.push_back(current_combo);
            return;
        }
        
        // Get the current digit as an integer
        int digit = digits[index] - '0';
        const string& possible_letters = pad[digit];
        
        // Iterate through the letters mapped to the current digit
        for (char letter : possible_letters) {
            current_combo.push_back(letter);                        // Choose
            backtrack(digits, index + 1, current_combo, result, pad); // Explore
            current_combo.pop_back();                               // Un-choose (backtrack)
        }
    }
};