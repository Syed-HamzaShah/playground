class Solution {
public:
    int smallestNumber(int n) {
        int bits = 0;
        int num = n;
        while(num > 0){
            num /= 2;
            bits++;
        }
        int result = (1 << bits) -1;

        if(result < n)
            return (1 << (bits + 1) -1);
    
        return result;
    }
};