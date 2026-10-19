class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            // If the current index is beyond the maximum reachable index, we can't move forward
            if (i > maxReach) {
                return false;
            }
            
            // Update the maximum reachable index
            maxReach = max(maxReach, i + nums[i]);
            
            // If we can already reach or pass the last index, return true early
            if (maxReach >= nums.size() - 1) {
                return true;
            }
        }
        
        return true;
    }
};