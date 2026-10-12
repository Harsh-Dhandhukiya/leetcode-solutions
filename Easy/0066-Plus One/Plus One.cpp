class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Traverse the array from right to left
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            // If the digit is 9, it becomes 0
            digits[i] = 0;
        }
        
        // If all digits were 9, we need an extra 1 at the front
        digits.insert(digits.begin(), 1);
        return digits;
    }
};