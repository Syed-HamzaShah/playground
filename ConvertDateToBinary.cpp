class Solution
{
    string toBinary(int n)
    {
        string res;
        while (n > 0)
        {
            res = char((n % 2) + '0') + res;
            n /= 2;
        }
        return res.empty() ? "0" : res;
    }

public:
    string convertDateToBinary(string date)
    {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        return toBinary(year) + "-" + toBinary(month) + "-" + toBinary(day);
    }
};