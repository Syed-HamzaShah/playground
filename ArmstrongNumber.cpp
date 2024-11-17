#include <iostream>
using namespace std;

int main()
{
    int number = 153;
    int ans1 = number;
    int ans2 = 0;

    while (number != 0)
    {
        int num = number % 10;
        ans2 += num * num * num;
        number = number / 10;
    }

    if (ans2 == ans1)
        cout << "Armstrong Number" << endl;
    else
        cout << "Not Armstrong Number" << endl;

    return 0;
}