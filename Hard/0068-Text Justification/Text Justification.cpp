class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int n = words.size();
        int i = 0;
        
        while (i < n) {
            int j = i + 1;
            int lineLength = words[i].length();
            
            // 1. Determine how many words fit in the current line
            while (j < n && lineLength + 1 + words[j].length() <= maxWidth) {
                lineLength += 1 + words[j].length();
                j++;
            }
            
            int numWords = j - i;
            int wordsLen = 0;
            for (int k = i; k < j; k++) {
                wordsLen += words[k].length();
            }
            
            int totalSpaces = maxWidth - wordsLen;
            string line = "";
            
            // 2. Left-justify if it's the last line or the line only has one word
            if (j == n || numWords == 1) {
                for (int k = i; k < j; k++) {
                    line += words[k];
                    if (k < j - 1) {
                        line += " ";
                    }
                }
                // Pad the remaining right side with spaces
                while (line.length() < maxWidth) {
                    line += " ";
                }
            } 
            // 3. Fully justify standard lines
            else {
                int spacesPerSlot = totalSpaces / (numWords - 1);
                int extraSpaces = totalSpaces % (numWords - 1);
                
                for (int k = i; k < j; k++) {
                    line += words[k];
                    if (k < j - 1) {
                        // Apply base spaces, plus 1 extra space to the leftmost slots if applicable
                        int spacesToApply = spacesPerSlot + (k - i < extraSpaces ? 1 : 0);
                        line += string(spacesToApply, ' ');
                    }
                }
            }
            
            result.push_back(line);
            i = j; // Move to the first word of the next line
        }
        
        return result;
    }
};