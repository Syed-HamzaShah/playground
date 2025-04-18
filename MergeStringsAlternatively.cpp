class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            string merged = "";
            int i = 0, j = 0;
            while(i < word1.length() && j < word2.length()){
                merged += word1[i];
                i++;
                merged += word2[j];
                j++;
            }
            while(i < word1.length()){
                merged += word1[i];
                i++;
            }
            while(j < word2.length()){
                merged += word2[j];
                j++;
            }
            return merged;
        }
    };