class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        bool size = true;
        unordered_map<int,int> m;

        if(nums2.size() > nums1.size()) size = false;

        if(size)
            for(auto num : nums1)
                m[num]++;
        else
            for(auto num: nums2)
                m[num]++;        

        vector<int> common;

        if(size){
            for(auto num : nums2){
                if(m.find(num) != m.end() && m[num] > 0){
                    common.push_back(num);
                    m[num]--;
                }
            } 
        }
        else{
            for(auto num : nums1){
                if(m.find(num) != m.end() && m[num] > 0){
                    common.push_back(num);
                    m[num]--;
                }
            } 
        }
           
        return common;
    }
};