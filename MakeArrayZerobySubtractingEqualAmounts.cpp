class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        set<int> s;
        ;
        for (auto &num : nums)
        {
            if (num == 0)
                continue;
            if (s.find(num) != s.end())
                continue;
            else
                s.insert(num);
        }
        return s.size();
    }
};