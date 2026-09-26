class Solution {
public:
    string countAndSay(int n) {
        // Base case
        if (n == 1) return "1";
        
        string current = "1";
        
        // Iterate to generate the sequence up to the nth term
        for (int i = 2; i <= n; ++i) {
            string next_str = "";
            int count = 1;
            
            // Run-length encoding of the 'current' string
            for (int j = 1; j < current.length(); ++j) {
                if (current[j] == current[j - 1]) {
                    count++;
                } else {
                    // When the character changes, append count and the character
                    next_str += to_string(count) + current[j - 1];
                    count = 1; // Reset count for the new character
                }
            }
            // Append the final group of characters
            next_str += to_string(count) + current.back();
            
            // Move to the next sequence
            current = next_str;
        }
        
        return current;
    }
};