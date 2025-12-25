class Solution {
public:
    long long removeZeros(long long n) {
        long long ans = 0;
        string temp = to_string(n);

        for(char &t : temp)
            if (t != '0') 
                ans = ans * 10 + (t - '0');

        return ans;
    }
};