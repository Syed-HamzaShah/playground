class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        int minimum = INT_MAX;

        for(int i = 1; i < arr.size(); i++){
            minimum = min(minimum, abs(arr[i-1] - arr[i]));
        }
        
        for(int i = 1; i < arr.size(); i++){
            if(abs(arr[i] - arr[i-1]) == minimum){
                ans.push_back({arr[i-1] , arr[i]});
                continue;
            }
        }

        return ans;
    }
};