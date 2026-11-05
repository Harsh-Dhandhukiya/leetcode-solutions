class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> currentSubset;
        backtrack(nums, 0, currentSubset, result);
        return result;
    }
    
private:
    void backtrack(const vector<int>& nums, int start, vector<int>& currentSubset, vector<vector<int>>& result) {
        // Add the current subset to our result
        result.push_back(currentSubset);
        
        // Iterate through the remaining elements
        for (int i = start; i < nums.size(); i++) {
            // Include the element
            currentSubset.push_back(nums[i]);
            
            // Move to the next element
            backtrack(nums, i + 1, currentSubset, result);
            
            // Backtrack: remove the element to try the next one
            currentSubset.pop_back();
        }
    }
};