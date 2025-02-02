class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> s(nums.begin(), nums.end());
        sort(s.begin(), s.end());
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            int num = 0;
            for (int j = 0; i < s.size(); j++)
            {
                if (nums[i] > s[j])
                    num++;
                else
                    break;
            }
            ans.push_back(num);
        }
        return ans;
    }
};