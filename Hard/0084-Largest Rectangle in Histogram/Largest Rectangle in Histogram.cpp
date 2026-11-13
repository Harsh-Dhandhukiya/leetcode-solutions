class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int max_area = 0;
        stack<int> s;
        int n = heights.size();
        
        // Loop up to n (inclusive) to handle remaining elements in the stack
        for (int i = 0; i <= n; ++i) {
            // Treat the height at index n as 0 to flush out the stack at the end
            int current_height = (i == n) ? 0 : heights[i];
            
            // If we find a smaller height, process the taller bars in the stack
            while (!s.empty() && current_height < heights[s.top()]) {
                int h = heights[s.top()];
                s.pop();
                
                // Calculate width: 
                // If stack is empty, the rectangle spans from index 0 to i
                // Otherwise, it spans from the element after the new stack top to i-1
                int w = s.empty() ? i : i - s.top() - 1;
                
                max_area = max(max_area, h * w);
            }
            s.push(i);
        }
        
        return max_area;
    }
};