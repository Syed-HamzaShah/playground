class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int temp = n;
        while(temp){
            int t = temp % 10;
            sum += t;
            product *= t;
            temp /= 10;
        }
        return !(n % (sum + product));
    }
};