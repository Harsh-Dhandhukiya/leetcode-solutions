class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Base case: If there are no intervals, return an empty vector.
        if (intervals.empty()) {
            return {};
        }

        // Sort intervals based on the starting value
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;

        for (const auto& interval : intervals) {
            // If merged is empty or there is no overlap, add the interval
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval);
            } 
            // If there is an overlap, merge the current and previous intervals
            else {
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }

        return merged;
    }
};