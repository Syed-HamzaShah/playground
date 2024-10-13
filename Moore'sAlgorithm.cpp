#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int array[] = {1, 2, 2, 1, 1};
    int size = sizeof(array) / sizeof(array[0]);

    int freq = 0;
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        if (freq == 0)
            ans = array[i];
        if (ans == array[i])
            freq++;
        else
            freq--;
    }

    cout << ans << endl;

    return 0;
}