class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> m;
        int count = 0;
        for(int i = 0; i < arr.size(); i++)
            m[arr[i]]++;
        for(auto &s: arr){
            if(m[s] == 1){
                count++;
                if(count == k) return s;
            }
        }    
        return "";        
    }
};