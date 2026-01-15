class Solution {
public:
    int countLargestGroup(int n) {
        int ans = 0;
        unordered_map<int, int> m;
        
        for(int i = 1; i <= n; i++){
            int sum = 0;
            int I = i;
            while(I > 0){
                int temp = I % 10;
                sum += temp;
                I /= 10; 
            }
            m[sum]++;
        }
        
        int maxIntegar = INT_MIN;

        for(auto [first, second]: m)
            maxIntegar = max(maxIntegar, second);

        for(auto [first, second]: m)
            if(second == maxIntegar)
                ans++;

        return ans;
    }
};