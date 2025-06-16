class Solution {
public:
    int countSeniors(vector<string>& details) {
        int no = 0;
        for(int i = 0; i < details.size(); i++){
            string temp = details[i];
            if (temp[11] > '6' || (temp[11] == '6' && temp[12] > '0')) no++;
        }
        return no;
    }
};