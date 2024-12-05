#include <vector>
using namespace std;

class Solution
{
public:
    vector<double> convertTemperature(double celsius)
    {
        double x = celsius + 273.15, y = celsius * 1.80 + 32.00;
        vector<double> ans = {x, y};
        return ans;
    }
};