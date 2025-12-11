class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        vector<int> maxCol(n+1, INT_MIN);
        vector<int> minCol(n+1, INT_MAX);
        vector<int> maxRow(n+1, INT_MIN);
        vector<int> minRow(n+1, INT_MAX);

        for(int i = 0; i < buildings.size(); i++){
            int x = buildings[i][0];
            int y = buildings[i][1];

            maxCol[x] = max(maxCol[x], y);
            minCol[x] = min(minCol[x], y);

            maxRow[y] = max(maxRow[y], x);
            minRow[y] = min(minRow[y], x);
        }


        int ans = 0;
        for(int i = 0; i < buildings.size(); i++){
            int x = buildings[i][0];
            int y = buildings[i][1];

            bool check1 = (maxCol[x] > y && minCol[x] < y);
            bool check2 = (maxRow[y] > x && minRow[y] < x);

            if(check1 && check2)
                ans++;
        }
        
        return ans;
    }
};