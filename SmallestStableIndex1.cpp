class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> prefixmax(n,INT_MIN);
        vector<int> suffixmin(n,INT_MAX);

        prefixmax[0]=nums[0];
        suffixmin[n-1]=nums[n-1];

        for(int i=1;i<n;i++)
            prefixmax[i]=max(nums[i],prefixmax[i-1]);

        for(int i=n-2;i>=0;i--)
            suffixmin[i]=min(nums[i],suffixmin[i+1]);


        for(int i=0;i<n;i++){
            int score=prefixmax[i]-suffixmin[i];
            if(score<=k)
                return i;
        }    
                
        return -1;
    }
};

