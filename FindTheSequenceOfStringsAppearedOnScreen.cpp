class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string> ans;
        string tempAns = "";

        for(int i = 0; i < target.length(); i++){
            tempAns += 'a';
            ans.push_back(tempAns);
            char tempChar = 'a';
            while(tempChar != target[i]){
                tempAns.pop_back();
                tempChar++;
                tempAns += tempChar;
                ans.push_back(tempAns);
            }
        }
        
        return ans;
    }
};