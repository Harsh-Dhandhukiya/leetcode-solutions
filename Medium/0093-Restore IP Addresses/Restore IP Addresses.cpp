class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> result;
        vector<string> current;
        
        // Quick length pruning
        if (s.length() < 4 || s.length() > 12) {
            return result;
        }
        
        backtrack(s, 0, current, result);
        return result;
    }

private:
    void backtrack(const string& s, int start, vector<string>& current, vector<string>& result) {
        // Base case: 4 parts collected
        if (current.size() == 4) {
            if (start == s.length()) {
                result.push_back(current[0] + "." + current[1] + "." + current[2] + "." + current[3]);
            }
            return;
        }
        
        // Remaining characters pruning: each remaining part takes 1 to 3 digits
        int remainingParts = 4 - current.size();
        int remainingChars = s.length() - start;
        if (remainingChars < remainingParts || remainingChars > remainingParts * 3) {
            return;
        }

        // Try segment lengths 1, 2, and 3
        for (int len = 1; len <= 3 && start + len <= s.length(); ++len) {
            string segment = s.substr(start, len);
            
            // Check for leading zero
            if (segment.length() > 1 && segment[0] == '0') {
                break; 
            }
            
            // Check numeric range [0, 255]
            if (stoi(segment) <= 255) {
                current.push_back(segment);
                backtrack(s, start + len, current, result);
                current.pop_back(); // Backtrack
            }
        }
    }
};