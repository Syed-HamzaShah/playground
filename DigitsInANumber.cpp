#include <iostream>
using namespace std;

int main()
{
    int number = 123;
    int size = sizeof(number) - 1;

    for (int i = 0; i < size; i++)
    {
        int digit = number % 10;
        cout << digit << " ";
        number /= 10;
    }
    return 0;
}
