class Solution {
public:
    bool checkString(string s) {
        bool b = false;
        for(auto a: s){
            if(a == 'b')
                b = true;
            if(b && a == 'a')
                return false;    
        }
        return true;
    }
};