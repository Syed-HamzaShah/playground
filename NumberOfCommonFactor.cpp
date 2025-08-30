class Solution {
public:
    int commonFactors(int a, int b) {
        int smallest = (a > b ? b : a);
        int count = 0;
        for(int i = smallest; i >= 1; i--)
            if(a % i == 0 && b % i == 0) count++;
        return count;
    }
};