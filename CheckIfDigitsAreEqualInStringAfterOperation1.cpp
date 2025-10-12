class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.length() > 2){
            string temp = "";
            for(int i = 1; i < s.length(); i++){
                int num1 = s[i] - '0'; 
                int num2 = s[i-1] - '0';
                temp += ((num1 + num2) % 10) + '0';
            }
            s = temp;
        }
        return s[0] == s[1];
    }
};