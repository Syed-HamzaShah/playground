class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxArea = 0;
        int area = 0;
        
        for(int i = 0; i < dimensions.size(); i++){
            int l = dimensions[i][0];
            int w = dimensions[i][1];

            int temp2 = l*l + w*w;
            int temp = l * w;

            if(temp2 > maxArea){
                maxArea = l*l + w*w;
                area = l * w;
            }
            else if (temp2 == maxArea){
                area = max(area,temp);
            }
        }
        return area;
    }
};