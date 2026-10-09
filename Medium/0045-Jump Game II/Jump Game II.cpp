class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0; // No jumps needed if the array has 1 or 0 elements
        
        int jumps = 0;
        int current_end = 0;
        int farthest = 0;
        
        // We only iterate up to n - 2. If we reach the last element, we don't need to jump again.
        for (int i = 0; i < n - 1; ++i) {
            // Update the farthest index we can reach from the current position
            farthest = max(farthest, i + nums[i]);
            
            // If we have reached the end of the current jump's range
            if (i == current_end) {
                jumps++;                 // We must take a jump
                current_end = farthest;  // Update the boundary of the new jump
                
                // If our new boundary reaches or exceeds the last index, we're done
                if (current_end >= n - 1) {
                    break;
                }
            }
        }
        
        return jumps;
    }
};