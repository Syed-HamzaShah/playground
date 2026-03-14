class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int evenCount = 0;
        int oddCount = 0;

        for(int element: position)
            if(element % 2 == 0)
                evenCount++;
            else
                oddCount++;

        return min(evenCount, oddCount);            
    }
};