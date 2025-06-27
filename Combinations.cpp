class Solution {
    vector<vector<int>> ans;

    void leapOfFaith(vector<int> temp,int j, int n , int k){
        if(temp.size() == k){
            ans.push_back(temp);
            return;
        }

        for (int i = j; i <= n - (k - temp.size()) + 1; ++i){
            temp.push_back(i);
            leapOfFaith(temp,i+1,n,k);
            temp.pop_back();
        } 

    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        leapOfFaith(temp,1,n,k);
        return ans;
    }
};