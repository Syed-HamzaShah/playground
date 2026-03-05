class Solution {
public:
    int minOperations(string s) {
        string zeroS = "";
        string OneS = "";

        for(int i = 0; i < s.length(); i++){
            if(i % 2 == 0){
                zeroS += '0';
                OneS += '1';
            }
            else{
                zeroS += '1';
                OneS += '0';
            }
        }

        int zeroAns = 0;
        int oneAns = 0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == zeroS[i])
                zeroAns++;
            if(s[i] == OneS[i])
                oneAns++;    
        }

        return min(zeroAns, oneAns);
    }
};