class Solution
{
public:
    int sumOfUnique(vector<int> &nums)
    {
        unordered_map<int, int> m;
        int sum = 0;

        for (auto &num : nums)
            m[num]++;

        for (auto num : m)
            if (num.second == 1)
                sum += num.first;

        return sum;
    }
};