class Solution {
public:
    int addDigits(int num) {
        while(num >= 10){
            int n = 0;
            int temp = num;
            while(temp > 0){
                int t = temp % 10;
                n += t;
                temp /= 10;
            }
            num = n;
        }
        return num;
    }
};