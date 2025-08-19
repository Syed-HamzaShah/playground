class Solution {
public:
    vector<double> getValid(double num1, double num2){
        vector<double> temp;
        temp.push_back(num1 + num2);
        temp.push_back(num1 - num2);
        temp.push_back(num2 - num1);
        temp.push_back(num1 * num2);
        if(num2 > FLT_EPSILON)
            temp.push_back(num1 / num2);
        if(num1 > FLT_EPSILON)
            temp.push_back(num2 / num1);
        return temp;
    }

    bool possible(vector<double> &arr){
        int size = (int)arr.size();

        if(size == 1) return abs(24.0 - arr[0]) < FLT_EPSILON;

        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                double num1 = arr[i];
                double num2 = arr[j];

                if(i == j) continue;

                vector<double> Valid = getValid(num1,num2);

                vector<double> nextArr;

                for(auto V: Valid){
                    nextArr.clear();
                    nextArr.push_back(V);

                    for(int k = 0; k < size; k++){
                        if(k == i || k == j) continue;

                        nextArr.push_back(arr[k]);
                    }

                    if(possible(nextArr)) return true;
                }
            }
        }
        return false;
    }
    
    bool judgePoint24(vector<int>& cards) {
        vector<double> arr(cards.begin(), cards.end());
        return possible(arr);
    }
};