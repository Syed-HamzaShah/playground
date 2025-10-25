class Solution {
public:
    int totalMoney(int n) {
        int money = 0;
        int day = 0;
        int increment = 1;
        while(day < n){
            for(int i = increment; i < increment + 7; i++){
                if(day == n) return money;
                money += i;
                day++;
                
            }
            increment++;
        }
        return money;
    }
};