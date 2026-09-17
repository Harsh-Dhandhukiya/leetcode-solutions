#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if (s.empty() || words.empty()) return result;

        int word_len = words[0].length();
        int num_words = words.size();
        int substring_size = word_len * num_words;
        int n = s.length();

        // If the string is shorter than the required concatenation, return empty.
        if (n < substring_size) return result;

        // Build a frequency map for the required words
        unordered_map<string, int> word_count;
        for (const string& word : words) {
            word_count[word]++;
        }

        // We only need 'word_len' passes to cover all possible starting offsets
        for (int i = 0; i < word_len; ++i) {
            int left = i;
            int count = 0;
            unordered_map<string, int> seen;

            // Slide the window by word_len steps
            for (int right = i; right <= n - word_len; right += word_len) {
                string sub = s.substr(right, word_len);

                // If the word is part of our required words
                if (word_count.find(sub) != word_count.end()) {
                    seen[sub]++;
                    count++;

                    // If we have more occurrences of 'sub' than needed, 
                    // shrink the window from the left until it's valid again.
                    while (seen[sub] > word_count[sub]) {
                        string left_word = s.substr(left, word_len);
                        seen[left_word]--;
                        count--;
                        left += word_len;
                    }

                    // If we matched all words, record the starting index
                    if (count == num_words) {
                        result.push_back(left);
                        
                        // Slide the window forward by one word to look for overlapping matches
                        string left_word = s.substr(left, word_len);
                        seen[left_word]--;
                        count--;
                        left += word_len;
                    }
                } else {
                    // The word is not in 'words', so the sequence is completely broken.
                    // Reset the tracking variables and start looking from the next word.
                    seen.clear();
                    count = 0;
                    left = right + word_len;
                }
            }
        }

        return result;
    }
};