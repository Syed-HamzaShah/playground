class Solution {
public:
    void leapOfFaith(vector<vector<int>>& grid, int r, int c, int size, bool ascending){
        vector<int> temp;
        int i = r, j = c;

        while(i < size && j < size){
            temp.push_back(grid[i][j]);
            i++,j++;
        }

        if(!ascending) 
            sort(temp.begin(), temp.end());
        else 
            sort(temp.rbegin(), temp.rend());

        i = r, j = c;
        int k = 0;
        while(i < size && j < size){
            grid[i][j] = temp[k++];
            i++,j++;
        }
    }

    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int size = grid.size();
        if(size == 1) return grid;

        for(int i = 0; i < size; i++)
            leapOfFaith(grid, i, 0, size, true);

        for(int i = 1; i < size; i++)
            leapOfFaith(grid, 0, i, size, false);
        
        return grid;
    }
};