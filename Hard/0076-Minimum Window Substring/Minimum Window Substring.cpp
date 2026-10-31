#include <string>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty() || s.length() < t.length()) {
            return "";
        }

        // Use a vector to store the frequency of characters in t
        vector<int> charCount(128, 0);
        for (char c : t) {
            charCount[c]++;
        }

        int left = 0, right = 0;
        int requiredChars = t.length();
        int minLen = INT_MAX;
        int startIndex = 0;

        while (right < s.length()) {
            // If the current character is needed, decrement the required count
            if (charCount[s[right]] > 0) {
                requiredChars--;
            }
            // Decrease the character's count in the map and expand the window
            charCount[s[right]]--;
            right++;

            // When all required characters are in the current window
            while (requiredChars == 0) {
                // Update the minimum window size and starting index
                if (right - left < minLen) {
                    minLen = right - left;
                    startIndex = left;
                }
                
                // Try shrinking the window from the left
                charCount[s[left]]++;
                // If removing the left character breaks the requirement, increase requiredChars
                if (charCount[s[left]] > 0) {
                    requiredChars++;
                }
                left++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(startIndex, minLen);
    }
};