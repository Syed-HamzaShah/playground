class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int val = 0;
        while(target > startValue){
            if(target % 2 == 0)
                target /= 2;
            else
                target++;
            val++;
        }
        return val + (startValue - target);
    }
};
