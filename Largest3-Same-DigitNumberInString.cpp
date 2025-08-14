class Solution {
public:
    string largestGoodInteger(string num) {
        string ans;

        for (int i = 2; i < num.length(); i++) 
            if (num[i] == num[i-1] && num[i] == num[i-2]) 
                if (ans.empty() || num[i] > ans[0]) 
                    ans = string(3, num[i]);
        
        return ans;
    }
};