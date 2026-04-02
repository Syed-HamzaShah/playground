class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](vector<int>& a, vector<int>& b){
            return a[1] > b[1];
        });
        
        int totalUnits = 0;
        
        for (auto &box : boxTypes) {
            int count = box[0];
            int units = box[1];
            
            int take = min(count, truckSize);
            totalUnits += take * units;
            truckSize -= take;
            
            if (truckSize == 0) break;
        }
        
        return totalUnits;
    }
};