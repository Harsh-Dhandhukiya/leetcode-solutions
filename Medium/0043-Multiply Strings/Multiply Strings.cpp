class Solution {
public:
    string multiply(string num1, string num2) {
        // If either number is zero, the product is zero
        if (num1 == "0" || num2 == "0") return "0";
        
        int n = num1.size();
        int m = num2.size();
        
        // The maximum possible length of the product is n + m
        vector<int> res(n + m, 0);
        
        // Multiply each digit starting from the rightmost side
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                
                // Add the current multiplication result to the position i + j + 1
                int sum = mul + res[i + j + 1];
                
                res[i + j + 1] = sum % 10;         // Current digit
                res[i + j] += sum / 10;            // Carry over to the next position
            }
        }
        
        // Convert the result vector back to a string
        string result = "";
        for (int val : res) {
            // Skip leading zeros
            if (!(result.empty() && val == 0)) {
                result.push_back(val + '0');
            }
        }
        
        return result.empty() ? "0" : result;
    }
};