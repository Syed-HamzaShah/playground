class Solution {
public:
    static const long long MOD = 1000000007;

    long long factorial(int n) {
        long long result = 1;
        for(int i = 2; i <= n; i++) {
            result = (result * i) % MOD;
        }
        return result;
    }

    int countPermutations(vector<int>& complexity) {
        int n = complexity.size();
        int unique = complexity[0];
        
        for(int i = 1; i < n; i++){
            if(complexity[i] <= unique) 
                return 0;
        }

        return (int)factorial(n - 1);
    }
};
