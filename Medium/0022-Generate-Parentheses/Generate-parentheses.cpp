#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> result;
        backtrack(result, "", 0, 0, n);
        return result;
    }

private:
    void backtrack(std::vector<std::string>& result, std::string current, int openCount, int closeCount, int maxPairs) {
        // Base case: string has reached maximum length (2 * n)
        if (current.length() == 2 * maxPairs) {
            result.push_back(current);
            return;
        }

        // Add an opening bracket if we still have available open brackets
        if (openCount < maxPairs) {
            backtrack(result, current + "(", openCount + 1, closeCount, maxPairs);
        }

        // Add a closing bracket if it won't exceed the number of opening brackets
        if (closeCount < openCount) {
            backtrack(result, current + ")", openCount, closeCount + 1, maxPairs);
        }
    }
};