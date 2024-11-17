#include <iostream>
using namespace std;

int EuclidAlgorithm(int a, int b);
int LCM(int a, int b);
int main()
{
    int a = 20, b = 28;

    cout << LCM(a, b) << endl;
    return 0;
}

int EuclidAlgorithm(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    return b == 0 ? a : b;
}

int LCM(int a, int b)
{
    int lcm = (a * b) / EuclidAlgorithm(a, b);

    return lcm;
}