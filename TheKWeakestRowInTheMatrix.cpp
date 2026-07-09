class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> temp;
        vector<int> ans;

        for(int i = 0; i < mat.size(); i++){
            int count = 0;
            for(int j = 0; j < mat[0].size(); j++)
                if(mat[i][j] == 1)
                    count++;
            temp.push_back({count, i});        
        } 

        sort(temp.begin(), temp.end());

        for(int i = 0; i < k; i++)
            ans.push_back(temp[i].second);
        
        return ans;
    }
};