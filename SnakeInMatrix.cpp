class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i = 0;
        int j = 0;

        for(int k = 0; k < commands.size(); k++){
            string s = commands[k];
            if(s[0] == 'D') i++;
            else if(s[0] == 'U') i--;
            else if(s[0] == 'R') j++;
            else if(s[0] == 'L') j--;
        }
        return (i * n) + j;
    }
};