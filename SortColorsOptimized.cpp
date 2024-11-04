#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int freqZero = 0;
        int freqOne = 0;
        int freqTwo = 0;

        for(int i = 0; i < nums.size() ; i++){
            if(nums[i] == 0)
            freqZero++;
            if(nums[i] == 1)
            freqOne++;
            if(nums[i] == 2)
            freqTwo++;
        }


        for(int i = 0 ; i < nums.size() ; i++){
            if(freqZero){
            nums[i] =0;
            freqZero--;
            }
            else if(freqOne){
                nums[i] =1;
                freqOne--;
            }
            else{
                nums[i] =2;
                freqTwo--;
            }
        }

    }
};