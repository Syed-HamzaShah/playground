class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int types = 0;
        int half = candyType.size() / 2;
        unordered_map<int,int> m;

        for(int i = 0; i < candyType.size(); i++){
            if(m.find(candyType[i]) == m.end())
                types++;
            
            m[candyType[i]]++;
        }
        return types < half ? types: half;
    }
};