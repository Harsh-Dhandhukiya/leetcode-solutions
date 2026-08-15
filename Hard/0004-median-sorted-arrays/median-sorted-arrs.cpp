class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Ensure nums1 is the smaller array to optimize the binary search
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }
        
        int m = nums1.size();
        int n = nums2.size();
        int low = 0;
        int high = m;
        
        while (low <= high) {
            int partition1 = low + (high - low) / 2;
            int partition2 = (m + n + 1) / 2 - partition1;
            
            // Edge cases: if partition is at the extreme ends, use INT_MIN or INT_MAX
            int maxLeft1 = (partition1 == 0) ? INT_MIN : nums1[partition1 - 1];
            int minRight1 = (partition1 == m) ? INT_MAX : nums1[partition1];
            
            int maxLeft2 = (partition2 == 0) ? INT_MIN : nums2[partition2 - 1];
            int minRight2 = (partition2 == n) ? INT_MAX : nums2[partition2];
            
            // Check if we have found the correct partition
            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                // If total length is odd
                if ((m + n) % 2 != 0) {
                    return max(maxLeft1, maxLeft2);
                } 
                // If total length is even
                else {
                    return (max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2.0;
                }
            } 
            // If we are too far right in nums1, move left
            else if (maxLeft1 > minRight2) {
                high = partition1 - 1;
            } 
            // If we are too far left in nums1, move right
            else {
                low = partition1 + 1;
            }
        }
        
        return 0.0;
    }
};