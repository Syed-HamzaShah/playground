class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long nonZero = 0;
        int power = 1;

        while(n > 0){
            int temp = n % 10;
            if(temp != 0){
                sum += temp;
                temp *= power;
                power *= 10;
                nonZero += temp;
            }
            n /= 10;
        }
        return sum * nonZero;
    }
};