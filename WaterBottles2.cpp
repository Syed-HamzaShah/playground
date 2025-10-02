class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int bottlesDrunk = numBottles;

        while(numBottles >= numExchange){
            bottlesDrunk++;
            numBottles -= numExchange;
            numBottles++;
            numExchange++;
        }
        
        return bottlesDrunk;
    }
};