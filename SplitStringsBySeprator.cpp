class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;

        for(int j = 0; j < words.size(); j++){
            string word = words[j];
            string temp = "";

            for(int i = 0; i < word.length(); i++){
                if(word[i] == separator){
                   if(!temp.empty()){
                        ans.push_back(temp);
                        temp = "";
                   }
                }
                else
                    temp += word[i];    
            }
            
            if(!temp.empty())
                ans.push_back(temp);
        }
        return ans;
    }
};