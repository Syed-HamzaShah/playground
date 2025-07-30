class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int PTruck = 0;
        int MTruck = 0;
        int GTruck = 0;

        int totalGarbage = 0;

        for(int i = 0; i < garbage.size(); i++){
            totalGarbage += garbage[i].size();

            for(auto c: garbage[i]){
                if(c == 'M') MTruck = i;    
                if(c == 'P') PTruck = i;    
                if(c == 'G') GTruck = i;    
            }
        }

        for(int i = 0; i < travel.size(); i++){
            if(i < GTruck) totalGarbage += travel[i];
            if(i < PTruck) totalGarbage += travel[i];
            if(i < MTruck) totalGarbage += travel[i];
        }
        return totalGarbage;
    }
};