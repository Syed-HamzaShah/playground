#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    string multiply(string num1, string num2)
    {
        if (num1 == "0" || num2 == "0")
            return "0";

        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        vector<int> mult(num1.length() + num2.length(), 0);

        for (int i = 0; i < num1.length(); i++)
        {
            for (int j = 0; j < num2.length(); j++)
            {
                int product = (num1[i] - '0') * (num2[j] - '0');
                mult[i + j] += product;

                if (mult[i + j] >= 10)
                {
                    mult[i + j + 1] += mult[i + j] / 10;
                    mult[i + j] %= 10;
                }
            }
        }

        while (mult.size() > 1 && mult.back() == 0)
        {
            mult.pop_back();
        }

        string ans = "";
        for (int i = mult.size() - 1; i >= 0; i--)
        {
            ans += (mult[i] + '0');
        }
        return ans;
    }
};
