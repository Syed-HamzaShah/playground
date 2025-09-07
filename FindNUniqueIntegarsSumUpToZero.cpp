class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        if(n % 2 == 1) ans.push_back(0);
        int index = 1;
        while(ans.size() <  n){
            ans.push_back(index);
            ans.push_back(-index);
            index++;
        }
        return ans;
    }
};