class Solution {
    vector<vector<int>> ans;
public:
    void LOF(const vector<int>& candidates,const int target, vector<int> array, int index, int sum){
        if(sum > target) return;
        if(sum == target) ans.push_back(array);

        for(int i = index; i < candidates.size(); i++){
            array.push_back(candidates[i]);
            sum += candidates[i];
            LOF(candidates,target, array, i, sum);
            sum -= candidates[i];
            array.pop_back();
        }

        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        LOF(candidates,target,{},0,0);
        return ans;
    }
};