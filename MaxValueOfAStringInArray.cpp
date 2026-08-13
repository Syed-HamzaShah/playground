class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int ans = 0;

        for(int i = 0; i < strs.size(); i++){
            string temp = strs[i];
            int l = temp.length();
            int alphaNumeric = false;

            for(char t: temp)
                if(t >= 'a' && t <= 'z')
                    alphaNumeric = true;

            if(!alphaNumeric)
                ans = max(ans, stoi(temp));    
            else
                ans = max(ans, l);
        }

        return ans;
    }
};