class Solution {
public:
    bool checkGoodInteger(int n) {
        int digit = 0;
        int square = 0;

        while(n > 0){
            digit += n % 10;
            square += (n % 10) * (n % 10);
            n /= 10;
        }
        
        return (square - digit) >= 50;
    }
};