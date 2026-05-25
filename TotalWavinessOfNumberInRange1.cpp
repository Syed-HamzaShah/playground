class Solution {
    int helper(string number){
        int num = 0;

        for(int i = 1; i < number.length() -1; i++){
            if(number[i] > number[i-1] && number[i] > number[i+1])
                num++;
            else if(number[i] < number[i-1] && number[i] < number[i+1])
                num++;    
        }
        return num;
    }
public:
    int totalWaviness(int num1, int num2) {
        int wave = 0;

        for(int i = num1; i <= num2; i++){
            string temp = to_string(i);
            if(temp.length() < 3) continue;            
            else wave += helper(temp);
        }
        
        return wave;
    }
};