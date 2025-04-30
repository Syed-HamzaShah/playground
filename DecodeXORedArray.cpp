#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> decode(vector<int> &encoded, int first)
    {
        int a = first;

        for (int i = 0; i < encoded.size(); i++)
        {
            int temp = first ^ encoded[i];
            encoded[i] = temp;
            first = temp;
        }
        encoded.insert(encoded.begin(), a);
        return encoded;
    }
};