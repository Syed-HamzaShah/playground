class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int maxOnes = 0;
        int victor = 0;

        for(int i = 0; i < grid.size(); i++){
            int temp = 0;
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1) 
                    temp++;
            }
            if(maxOnes < temp){
                maxOnes = temp;
                victor = i;
            }
        }
        
        return victor;
    }
};