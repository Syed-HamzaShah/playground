class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        int temp;

        while(numBottles >= numExchange){
            int div = numBottles / numExchange;
            int mod = numBottles % numExchange;
            ans += div;
            numBottles = div + mod;       
        }
        return ans;
    }
};