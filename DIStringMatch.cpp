class Solution {
public:
    vector<int> diStringMatch(string s) {
        int start = 0;
        int end = s.length();
        vector<int> ans;

        for(auto a: s){
            if(a == 'I') {
                ans.push_back(start);
                start++;
            }
            else{
                ans.push_back(end);
                end--;
            }     
        }
        if(s[s.length()-1] == 'D') ans.push_back(start);
        else ans.push_back(end);
         
        return ans;
    }
};