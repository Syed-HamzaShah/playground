class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.length() < 26) return false;
        vector<bool> freq(26, 0);

        for(int i = 0; i < sentence.length(); i++) 
            freq[sentence[i] - 97] = 1;

        for(int num: freq)
            if(num == 0) return false;

        return true;
    }
};