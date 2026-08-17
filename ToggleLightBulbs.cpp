class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int>ans;
        vector<bool> lights(101,false);

        for(int i=0;i<bulbs.size();i++)
            lights[bulbs[i]] = !lights[bulbs[i]];

        for(int i=1;i<=100;i++)
            if(lights[i])
                ans.push_back(i);
        
        return ans;
    }
};