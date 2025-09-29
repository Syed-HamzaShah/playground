class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int stream = 1;
        int i = 0;
        while(i < target.size() && stream <= n){
            if(stream == target[i]) {
                ans.push_back("Push");
                stream++;
                i++;
            }
            else if(stream != target[i]){
                ans.push_back("Push");
                ans.push_back("Pop");
                stream++;
            }    
        }
        return ans;        
    }
};