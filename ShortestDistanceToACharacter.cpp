class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans;
        
        for(int i = 0; i < s.length(); i++){
            int a = i;
            int b = i;
            
            while(a >= 0 || b < s.length()){
                if(a >= 0 && s[a] == c){
                    ans.push_back(i - a);
                    break;
                }
                else if(b < s.length() && s[b] == c){
                    ans.push_back(b - i);
                    break;
                }
                a--;
                b++; 
            }
        }
        return ans;
    }
};