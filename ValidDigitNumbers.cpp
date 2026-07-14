class Solution {
public:
    bool validDigit(int n, int x) {
        int num = 0;
        bool condition1 = false;
        bool condition2 = true;

        while(n > 0){
            int temp = n % 10;
            num = temp;
            if(temp == x)
                condition1 = true;
            n /= 10;    
        }

        if(num == x)
            condition2 = false;

        return condition1 && condition2;
    }
};