class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26, 0);

        for(char w: word)
            freq[w - 'a']++;

        sort(freq.begin(), freq.end(), greater<int> ());

        int index = 0;
        int ans = 0;

        while(index < 26 && freq[index] != 0){
            if(index < 8)
                ans += 1 * freq[index];
            else if(index < 16)
                ans += 2 * freq[index];
            else if(index < 24)
                ans += 3 * freq[index];
            else
                ans += 4 * freq[index];   

            index++;             
        }

        return ans;    
    }
};