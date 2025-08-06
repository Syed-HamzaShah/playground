class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        vector<int> mark(baskets.size(), 0);
        int count = 0;
        for(int i = 0; i < fruits.size(); i++){
            for(int j = 0; j < baskets.size(); j++){
                if(fruits[i] <= baskets[j] && mark[j] == 0){
                    mark[j] = 1;
                    count++;
                    break;
                }
            }
        }
        return fruits.size() - count;
    }
};