class Solution {
public:
    int smallestNumber(int n, int t) {
        while(1){
            int temp = n;
            int product = 1;
            while(temp){
                product *= temp % 10;
                temp /= 10;
            }
            if(product % t == 0)
                return n;
            n++;    
        }
        return -1;
    }
};