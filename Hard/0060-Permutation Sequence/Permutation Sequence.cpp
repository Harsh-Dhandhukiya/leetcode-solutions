class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> numbers;
        int fact = 1;
        
        // Prepare the list of available numbers and (n-1)!
        for (int i = 1; i <= n; i++) {
            numbers.push_back(i);
            if (i < n) {
                fact *= i;
            }
        }
        
        // Convert k to 0-based indexing to make the math easier
        k = k - 1;
        string result = "";
        
        // Build the permutation digit by digit
        for (int i = n; i >= 1; i--) {
            int index = k / fact; // Find the index of the current digit
            result += to_string(numbers[index]);
            numbers.erase(numbers.begin() + index); // Remove used digit
            
            k = k % fact; // Update k for the remaining positions
            
            if (i > 1) {
                fact /= (i - 1); // Update the factorial for the next iteration
            }
        }
        
        return result;
    }
};