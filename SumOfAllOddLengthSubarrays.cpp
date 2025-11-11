class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        int level = 1;
        while(level <= arr.size()){
        for(int i = 0; i + level <= arr.size(); i++){
            for(int j = i; j < i+level; j++){
                sum += arr[j];
            }
        }
            level += 2;
        }
        
        return sum;
    }
};