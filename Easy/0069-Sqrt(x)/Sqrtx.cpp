class Solution {
public:
    int mySqrt(int x) {
        // Base cases
        if (x == 0 || x == 1) {
            return x;
        }
        
        int left = 1;
        int right = x;
        int ans = 0;
        
        while (left <= right) {
            int mid = left + (right - left) / 2; // Prevents integer overflow
            
            // Use division instead of mid * mid to avoid integer overflow
            if (mid <= x / mid) {
                ans = mid;       // mid is a potential answer
                left = mid + 1;  // look for a larger valid number
            } else {
                right = mid - 1; // mid is too large
            }
        }
        
        return ans;
    }
};