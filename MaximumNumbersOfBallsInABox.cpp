class Solution {
public:
    int sumDigits(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int countBalls(int lowLimit, int highLimit) {
        vector<int> array(46, 0);

        for(int i = lowLimit; i <= highLimit; i++){
            int num = sumDigits(i);
            array[num]++;
        }

        int ans = INT_MIN;

        for(int num: array)
            ans = max(ans, num);
        
        return ans;
    }
};