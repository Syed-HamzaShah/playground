class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int ans = 0;
        int dec = 0;

        for(int i = 0; i < batteryPercentages.size(); i++){
            int temp = batteryPercentages[i] - dec;
            if(temp > 0){
                ans++;
                dec++;
            }              
        }
        
        return ans;
    }
};