class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> array(5, 0);

        for(char t : text){
            if(t == 'b') array[0]++;
            else if(t == 'a') array[1]++;
            else if(t == 'l') array[2]++;
            else if(t == 'o') array[3]++;
            else if(t == 'n') array[4]++;
        } 
        
        return min({array[0], array[1], array[2] / 2, array[3] / 2, array[4]});
    }
};