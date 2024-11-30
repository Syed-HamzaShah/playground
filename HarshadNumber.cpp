class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int n = x;
        int ans = 0;

        while(x != 0){
            int num = x % 10;
            ans += num;
            x /= 10;
        }
        
        if(n % ans == 0 )
        return ans;

        return -1;
    }
};