class Solution {
public:
    bool isPalindrome(int x) {
        // Step 1: Handle edge cases
        // - Negative numbers are never palindromes (e.g., -121 reversed is 121-)
        // - If a number ends in 0, the first digit must also be 0, which is only true for 0 itself.
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revertedNumber = 0;
        
        // Step 2: Reverse the second half of the number
        // We only need to reverse half of the digits to avoid potential integer overflow
        // and to optimize the execution time.
        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }

        // Step 3: Check for palindrome
        // If the length of the number is even, x will equal revertedNumber.
        // If the length is odd, revertedNumber will have one more digit than x. 
        // We can safely divide revertedNumber by 10 to ignore the middle digit.
        return x == revertedNumber || x == revertedNumber / 10;
    }
};