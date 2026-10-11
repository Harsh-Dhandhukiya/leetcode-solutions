class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram_map;
        
        for (const string& s : strs) {
            string key = s;
            // Sort the string to create a standard key for all anagrams
            sort(key.begin(), key.end());
            anagram_map[key].push_back(s);
        }
        
        vector<vector<string>> result;
        // Collect all the grouped anagrams from the map
        for (auto& pair : anagram_map) {
            result.push_back(pair.second);
        }
        
        return result;
    }
};