#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
    // Memoization map to store results of previously computed string pairs
    unordered_map<string, bool> memo;

public:
    bool isScramble(string s1, string s2) {
        // Base cases
        if (s1 == s2) return true;
        if (s1.length() != s2.length()) return false;
        
        string key = s1 + "_" + s2;
        if (memo.count(key)) return memo[key];
        
        // Pruning: if the character counts don't match, they can't be scrambles
        int count[26] = {0};
        int n = s1.length();
        for (int i = 0; i < n; i++) {
            count[s1[i] - 'a']++;
            count[s2[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return memo[key] = false;
            }
        }
        
        // Try splitting at every possible index from 1 to n-1
        for (int i = 1; i < n; i++) {
            // Case 1: No swap at this split
            if (isScramble(s1.substr(0, i), s2.substr(0, i)) && 
                isScramble(s1.substr(i), s2.substr(i))) {
                return memo[key] = true;
            }
            
            // Case 2: Swap at this split
            if (isScramble(s1.substr(0, i), s2.substr(n - i)) && 
                isScramble(s1.substr(i), s2.substr(0, n - i))) {
                return memo[key] = true;
            }
        }
        
        // If neither swapping nor not-swapping works for any split point
        return memo[key] = false;
    }
};