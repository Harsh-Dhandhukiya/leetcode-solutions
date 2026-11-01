#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stack;
        stringstream ss(path);
        string temp;
        
        // Split the path by the '/' delimiter
        while (getline(ss, temp, '/')) {
            // Ignore empty strings (caused by multiple slashes) and current directory periods
            if (temp == "" || temp == ".") {
                continue;
            } 
            // Pop from the stack if we encounter a parent directory double period
            else if (temp == "..") {
                if (!stack.empty()) {
                    stack.pop_back();
                }
            } 
            // Push valid directory or file names to the stack
            else {
                stack.push_back(temp);
            }
        }
        
        // Reconstruct the simplified canonical path
        string res = "";
        for (const string& dir : stack) {
            res += "/" + dir;
        }
        
        // Return "/" if the stack was empty, otherwise return the constructed path
        return res.empty() ? "/" : res;
    }
};