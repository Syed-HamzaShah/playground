class Solution {
public:
    int minimumBoxes(vector<int>& apples, vector<int>& capacity) {
        int totalApple = 0;

        for(int &apple: apples)
            totalApple += apple;

        sort(capacity.begin(), capacity.end(), greater<int>());

        int i = 0;
        while(totalApple > 0 && i < capacity.size()){
            totalApple -= capacity[i];
            i++;
        }    
        
        return i;
    }
};