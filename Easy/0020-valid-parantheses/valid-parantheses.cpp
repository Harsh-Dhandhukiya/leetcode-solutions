#include <stack>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;
        
        for (char c : s) {
            // Push opening brackets onto the stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            // Handle closing brackets
            else {
                // If stack is empty, there's no matching opening bracket
                if (st.empty()) return false;
                
                char top = st.top();
                st.pop();
                
                // Check if the closing bracket matches the top opening bracket
                if ((c == ')' && top != '(') || 
                    (c == '}' && top != '{') || 
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        
        // If stack is empty, all brackets are valid and closed
        return st.empty();
    }
};