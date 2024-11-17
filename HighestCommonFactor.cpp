#include <iostream>
using namespace std;

int GDC(int a, int b);
int EuclidAlgorithm(int a, int b);
int OptimizedEuclidAlgorithm(int a, int b);
int Recursive(int a, int b);

int main()
{
    int a = 20, b = 28;

    cout << GDC(a, b) << endl;
    cout << EuclidAlgorithm(a, b) << endl;
    cout << OptimizedEuclidAlgorithm(a, b) << endl;
    cout << Recursive(a, b) << endl;

    return 0;
}

int GDC(int a, int b)
{
    int gdc = 0;
    for (int i = 1; i < min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
            gdc = i;
    }
    return gdc;
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

int OptimizedEuclidAlgorithm(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }

    return b == 0 ? a : b;
}

int Recursive(int a, int b)
{
    if (b == 0)
        return a;

    return Recursive(b, a % b);
}