class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0;
        
        int left = 0;
        int right = height.size() - 1;
        int max_left = 0;
        int max_right = 0;
        int total_water = 0;
        
        while (left < right) {
            if (height[left] <= height[right]) {
                if (height[left] >= max_left) {
                    // Update the maximum height seen so far from the left
                    max_left = height[left];
                } else {
                    // Water trapped is the difference between max_left and current height
                    total_water += max_left - height[left];
                }
                left++;
            } else {
                if (height[right] >= max_right) {
                    // Update the maximum height seen so far from the right
                    max_right = height[right];
                } else {
                    // Water trapped is the difference between max_right and current height
                    total_water += max_right - height[right];
                }
                right--;
            }
        }
        
        return total_water;
    }
};