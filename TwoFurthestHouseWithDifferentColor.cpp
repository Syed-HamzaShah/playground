class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ans = INT_MIN;
        int i = 0;

        while(i < colors.size() -1){
            int j = colors.size() - 1 ;
            while(j > i){
                if(colors[i] != colors[j])
                    ans = max(ans, abs(j - i));
                j--;    
            }
            i++;
        }
        return ans;
    }
};