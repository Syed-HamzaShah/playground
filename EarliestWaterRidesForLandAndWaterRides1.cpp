class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans = INT_MAX;
        int ls = landStartTime.size();
        int ws = waterStartTime.size();

        for(int i = 0; i < ls; i++){
            for(int j = 0; j < ws; j++){
                int temp = landStartTime[i] + landDuration[i]; 
                int land = max(temp, waterStartTime[j]) + waterDuration[j];
                ans = min(ans, land);

                int temp1 = waterStartTime[j] + waterDuration[j];
                int water = max(temp1, landStartTime[i]) + landDuration[i];
                ans = min(ans, water);
            }
        }

        return ans;
    }
};