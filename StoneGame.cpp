class Solution
{
public:
    bool stoneGame(vector<int> &piles)
    {
        int even = 0;
        int odd = 0;
        int start = 0;
        int end = piles.size() - 1;

        while (start < end)
        {
            even += piles[start];
            odd += piles[end];
            start++;
            end--;
        }
        return even == odd ? false : true;
    }
};