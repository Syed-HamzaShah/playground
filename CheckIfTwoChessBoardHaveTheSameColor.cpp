class Solution
{
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2)
    {
        int one = ((coordinate1[0] - 'a') + (coordinate1[1] - '0')) % 2;
        int two = ((coordinate2[0] - 'a') + (coordinate2[1] - '0')) % 2;

        return one == two;
    }
};