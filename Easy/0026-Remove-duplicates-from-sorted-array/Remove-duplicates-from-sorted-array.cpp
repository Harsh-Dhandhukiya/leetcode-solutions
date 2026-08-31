class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int k = 1; // Pointer for the location of the next unique element
        
        for (int i = 1; i < nums.size(); i++) {
            // Compare current element with the previous one
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k;
    }
};