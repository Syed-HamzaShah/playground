class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> temp;
        for(int i = 0; i < bank.size(); i++){
            int count = 0;
            for(auto &c: bank[i])
                if(c == '1') count++;
            if(count > 0)
                temp.push_back(count);    
        }

        int ans = 0;
        for(int i = 1; i < temp.size(); i++)
            ans += (temp[i] * temp[i-1]);

        return ans;
    }
};