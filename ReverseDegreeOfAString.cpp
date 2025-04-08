class Solution {
    public:
        int reverseDegree(string s) {
            int ans = 0;
            for(int i = 0 ; i < s.length(); i++){
                int degree = s[i] - 'a' + 1;
                int reverse = 26 - degree + 1;
                ans += reverse * (i+1);
            }
            return ans;
        }
    };