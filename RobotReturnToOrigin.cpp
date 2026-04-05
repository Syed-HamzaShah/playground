class Solution {
public:
    bool judgeCircle(string moves) {
        int up = 0;
        int down = 0;
        int left = 0;
        int right = 0;
        for(char move: moves){
            if(move == 'U'){
                up++;
                down--;
            }
            else if(move == 'D'){
                down++;
                up--;
            } 
            else if(move == 'L'){
                left++;
                right--;
            } 
            else{
                right++;
                left--;
            } 
        }
        if(up == down && left == right && up == 0 && left == 0)
            return true;

        return false;    
    }
};