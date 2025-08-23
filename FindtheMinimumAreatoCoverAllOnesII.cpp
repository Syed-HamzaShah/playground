class Solution {
    vector<vector<int>> temp;
    int n;
    int m;

public:
    int minimumSum(vector<vector<int>>& grid) {
        temp = grid;
        n = temp.size();
        m = temp[0].size();
        
        int ans = INT_MAX / 3;
        
        for (int i = 0; i < n - 1; i++){ 
            ans = min(ans, min(oneArea(0, 0, i, m - 1) + twoArea(i + 1, 0, n - 1, m - 1), 
            twoArea(0, 0, i, m - 1) + oneArea(i + 1, 0, n - 1, m - 1)));
        } 
        
        for (int j = 0; j < m - 1; j++) { 
            ans = min(ans, min(oneArea(0, 0, n - 1, j) + twoArea(0, j + 1, n - 1, m - 1), 
            twoArea(0, 0, n - 1, j) + oneArea(0, j + 1, n - 1, m - 1)));
        } 
        
            return ans; 
        } 
        
    int twoArea(int r1, int c1, int r2, int c2) { 
        int ans = INT_MAX / 2; 
            
        for (int i = r1; i < r2; i++) { 
            ans = min(ans, oneArea(r1, c1, i, c2) + oneArea(i + 1, c1, r2, c2));
        } 
            
        for (int j = c1; j < c2; j++) { 
            ans = min(ans, oneArea(r1, c1, r2, j) + oneArea(r1, j + 1, r2, c2)); 
        } 
                
        return ans; 
    }     
            
    int oneArea(int r1, int c1, int r2, int c2) { 
        int left = c2, right = c1, up = r2, down = r1; 
        bool flag = false; 
            
        for (int i = r1; i <= r2; i++) { 
            for (int j = c1; j <= c2; j++) { 
                if (temp[i][j] == 1) { 
                    flag = true; 
                    up = min(up, i); 
                    down = max(down, i); 
                    left = min(left, j); 
                    right = max(right, j); 
                } 
            } 
        } 
        return !flag ? INT_MAX / 4 : (right - left + 1) * (down - up + 1); 
    }
};