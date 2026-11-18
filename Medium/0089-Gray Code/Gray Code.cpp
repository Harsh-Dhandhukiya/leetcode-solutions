class Solution {
public:
    vector<int> grayCode(int n) {
        int total = 1 << n;
        vector<int> result;
        result.reserve(total);
        
        for (int i = 0; i < total; ++i) {
            result.push_back(i ^ (i >> 1));
        }
        
        return result;
    }
};