
class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> array(n, 0);

        for(int i = 0; i < edges.size(); i++)
            array[edges[i][1]]++;

        int ans = -1;    

        for(int i = 0; i < n; i++){
            if(array[i] == 0){
                if(ans != -1) return -1;
                ans = i;
            }
        }
        
        return ans;
    }
};