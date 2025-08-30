class Solution {
public:
    int minimumChairs(string s) {
        int chair = 0;
        int currentCount = 0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'E')
                currentCount++;
            else 
                currentCount--;
            chair = max(chair, currentCount);
        }
        
        return chair;
    }
};