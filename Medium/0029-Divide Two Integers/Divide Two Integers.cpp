#include <climits>

class Solution {
public:
    int divide(int dividend, int divisor) {
        // 1. Handle the only overflow edge case
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        // 2. Count negatives to determine the final sign, 
        // and convert both numbers to negative to avoid overflow.
        int negatives = 2;
        if (dividend > 0) {
            negatives--;
            dividend = -dividend;
        }
        if (divisor > 0) {
            negatives--;
            divisor = -divisor;
        }

        int quotient = 0;
        // Limit to safely double a negative value without underflowing
        int HALF_INT_MIN = -1073741824; 

        // 3. Subtract multiples of the divisor using bit manipulation (doubling)
        // Note: Because the numbers are negative, dividend <= divisor means |dividend| >= |divisor|
        while (dividend <= divisor) {
            int powerOfTwo = -1;
            int value = divisor;
            
            // Keep doubling `value` as long as it fits inside the remaining `dividend`
            while (value >= HALF_INT_MIN && dividend <= value + value) {
                value += value;
                powerOfTwo += powerOfTwo;
            }
            
            quotient += powerOfTwo; // We build the quotient negatively
            dividend -= value;
        }
        
        // 4. Apply the correct sign to the result
        if (negatives != 1) {
            return -quotient;
        }
        return quotient;
    }
};