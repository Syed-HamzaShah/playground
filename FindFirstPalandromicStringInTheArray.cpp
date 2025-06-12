class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto w: words){
            int i = 0;
            int j = w.length() -1 ;
            bool found = true;
            while(i < j){
                if(w[i] != w[j]) {
                    found = false;
                    break;
                }    
                i++;
                j--;
            }
            if(found) return w;
        }
        return "";
    }
};