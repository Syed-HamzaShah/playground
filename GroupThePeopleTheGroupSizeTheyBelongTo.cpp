class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> m;
        vector<vector<int>> ans;

        for(int i = 0; i < groupSizes.size(); i++){
            if(m.find(groupSizes[i]) == m.end())
                m[groupSizes[i]] = {i};
            else
                m[groupSizes[i]].push_back(i);
        }

        for(auto &[first, second]: m){
            vector<int> temp;

            for(auto &element : second){
                temp.push_back(element);

                if(temp.size() == first){
                    ans.push_back(temp);
                    temp.clear();
                }
            }
        }

        return ans;
    }
};