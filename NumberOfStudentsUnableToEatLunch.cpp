class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int countOfOne = 0;
        int countOfZero = 0;

        for(int i = 0; i < students.size(); i++)
            if(students[i] == 0)
                countOfZero++;
            else 
                countOfOne++;    

        for(int i = 0; i < sandwiches.size(); i++){
            if(sandwiches[i] == 0)
                if(countOfZero == 0)
                    break;
                else
                    countOfZero--;
            else
                if(countOfOne == 0)
                    break;
                else
                    countOfOne--;                
        }        
        return countOfOne + countOfZero;
    }
};