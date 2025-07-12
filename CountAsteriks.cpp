class Solution {
public:
    int countAsterisks(string s) {
        bool toggle = true;
        int count  = 0;
        for(auto c: s){
            if(c == '|') toggle = !toggle;
            else if(c == '*' && toggle) count++;
        }
        return count;
    }
};