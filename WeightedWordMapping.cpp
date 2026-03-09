class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        vector<int> array;

        for(int i = 0; i < words.size(); i++){
            int sum = 0;

            for(int j = 0; j < words[i].size(); j++)
                sum += weights[words[i][j] - 'a'];

            array.push_back(sum % 26);
        }
        
        string ans = "";

        for(int i = 0; i < array.size(); i++)
            ans += char('z' - array[i]);

        return ans;
    }
};