class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> m;
        vector<int> ans;

        for(int num: arr1)
            m[num]++;

        for(int num: arr2){
            while(m[num] != 0){
                ans.push_back(num);
                m[num]--;
            }
        }

        vector<int> temp;
        for(auto [first, second]: m)
            for(int i = 0; i < second; i++)
                temp.push_back(first);

        sort(temp.begin(), temp.end());

        for(int i = 0; i < temp.size(); i++)
            ans.push_back(temp[i]);            
        
        return ans;
    }
};