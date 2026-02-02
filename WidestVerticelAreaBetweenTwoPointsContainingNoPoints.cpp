class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> xs;
        
        for (auto &p : points)
            xs.push_back(p[0]);
        
        sort(xs.begin(), xs.end());
        
        int maxWidth = 0;
        for (int i = 1; i < xs.size(); i++) 
            maxWidth = max(maxWidth, xs[i] - xs[i - 1]);
        
        return maxWidth;
    }
};
