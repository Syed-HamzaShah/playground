#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> array = {1, 2, 2, 1, 1, 2, 1, 1, 1, 1};
    int size = array.size();

    sort(array.begin(), array.end());

    int frequency = 1;
    int ans = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] == array[i - 1])
            frequency++;
        else
        {
            frequency = 1;
            ans = array[i];
        }

        if (frequency > size / 2)
        {
            ans = array[i];
        }
    }

    cout << ans;

    return 0;
}