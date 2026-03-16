class Solution {
public:
    string trimTrailingVowels(string s) {
        set<char> temp = {'a','e','i','o','u'};
        
        int index = s.length();

        for(int i = s.length() - 1; i >= 0; i--){
            if(temp.find(s[i]) != temp.end()){
                index--;
            }
            else{
                break;
            }
        }

        return s.substr(0, index);
    }
};