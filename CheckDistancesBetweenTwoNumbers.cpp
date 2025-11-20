class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<int> array(26, -1);

        for(int i = 0; i < s.length(); i++){
            if(array[s[i] - 'a'] == -1) 
                array[s[i] - 'a'] = i;
            else
                array[s[i] - 'a'] = i - array[s[i] - 'a'] -1;
        }

        for(int i = 0; i < 26; i++)
            if(array[i] != -1 && array[i] != distance[i])
                return false;
        

        return true;
    }
};