#include <vector>
#include <stack>
using namespace std;

vector<int> finalPrices(vector<int> &prices)
{
    int n = prices.size();
    vector<int> result(prices);
    stack<int> st; // Stack holds potential discounts

    for (int i = n - 1; i >= 0; --i)
    {
        // Pop all elements greater than current price — they can't be used as discounts
        while (!st.empty() && st.top() > prices[i])
        {
            st.pop();
        }

        // If there's a valid discount, subtract it
        if (!st.empty())
        {
            result[i] -= st.top();
        }

        // Push current price onto stack for the next leftward item
        st.push(prices[i]);
    }

    return result;
}
