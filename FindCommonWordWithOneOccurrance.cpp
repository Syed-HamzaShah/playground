class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> m1;
        unordered_map<string, int> m2;

        for(int i = 0; i < words1.size(); i++)
            m1[words1[i]]++;

        for(int i = 0; i < words2.size(); i++)
            m2[words2[i]]++;

        int count = 0;
        
        for(auto [first, second] : m2){
            if(m1[first] == second && second == 1)
                count++;
        }

        return count;
    }
};