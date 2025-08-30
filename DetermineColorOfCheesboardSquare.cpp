class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int num1 = coordinates[0] - 96;
        int num2 = coordinates[1] - 48;
        return (num1 + num2) %2 == 0? false: true;
    }
};