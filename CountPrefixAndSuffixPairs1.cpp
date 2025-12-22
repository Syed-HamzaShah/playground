class Solution {
public:
    bool check(string str1, string str2){
        for(int i = 0; i < str1.length(); i++)
            if(str1[i] != str2[i])
                return false;

        int i = str1.size() - 1;
        int j = str2.size() - 1;
        while(i >= 0){
            if(str1[i] != str2[j])
                return false;
            i--;
            j--;    
        }
        
        return true;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int ans = 0;
        for(int i = 0; i < words.size() -1; i++){
            for(int j = i + 1; j < words.size(); j++){
                if(words[i] <= words[j]){
                    bool checkForAns = check(words[i], words[j]);
                    if(checkForAns) ans++;
                }    
            }
        }
        return ans;
    }
};