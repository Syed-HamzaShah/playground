class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count = 0;
        for(auto c: s)
            if(c == '1') count++; 

        string ans = "";
        for(int i = 0; i < s.length()-1; i++){
            if(count > 1) {
                ans += "1";
                count--;
            }    
            else ans += "0";
        }  
        return ans + "1";    
    }
};