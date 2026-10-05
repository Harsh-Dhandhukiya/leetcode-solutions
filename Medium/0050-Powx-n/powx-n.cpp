class Solution {
public:
    double myPow(double x, int n) {
        long long p = n;
        
        if (p < 0) {
            p = -p;
        }
        
        double result = 1.0;
        double current_base = x;
        
        while (p > 0) {
            if (p % 2 != 0) {
                result *= current_base;
            }
            current_base *= current_base;
            p /= 2;
        }
        
        // If the original power was negative, take the reciprocal of the final result
        return n < 0 ? 1.0 / result : result;
    }
};