class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0; i < image.size(); i++){
            int j = 0;
            int k = image.size()-1;

            while(j <= k){
                swap(image[i][j],image[i][k]);
                j++;
                k--;
            }
        }

        for(int i = 0; i < image.size(); i++){
            for(int j = 0; j < image.size(); j++){
                if(image[i][j] == 0) image[i][j] = 1;
                else image[i][j] = 0;
            }
        }

        return image;
    }
};