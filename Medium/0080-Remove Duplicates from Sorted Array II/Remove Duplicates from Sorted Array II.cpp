class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int n : nums) {
            // Keep the element if we have less than 2 elements so far 
            // OR if the current element is greater than the element two places back
            if (i < 2 || n > nums[i - 2]) {
                nums[i] = n;
                i++;
            }
        }
        return i;
    }
};