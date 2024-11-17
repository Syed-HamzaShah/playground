#include <iostream>
using namespace std;

int main()
{
    int number = 1234;
    int reverse = 0;

    while (number != 0)
    {
        int num = number % 10;
        if (reverse > INT_MAX / 10 || reverse < INT_MIN / 10)
        {
            cout << "0" << endl;
            return -1;
        }
        reverse = (reverse * 10) + num;
        number = number / 10;
    }
    cout << reverse << endl;
    return 0;
}