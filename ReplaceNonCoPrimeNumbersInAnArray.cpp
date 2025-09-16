class Solution {
public:
    int GCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    
    long long LCM(int a, int b) {
        return ((long long)a * b) / GCD(a, b);
    }

    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> result;
        for(auto &num: nums){
            while(!result.empty() && GCD(result.back(), num) > 1){
                int temp = result.back();
                result.pop_back();
                num = LCM(temp,num);
            }
            result.push_back(num);
        }
        return result;
    }
};