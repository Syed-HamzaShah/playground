#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number : ";
    cin >> number;

    if (number < 2)
    {
        cout << "No prime numbers less than 2." << endl;
        return 0;
    }

    for (int i = 2; i < number; i++)
    {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << i << " ";
    }
    cout << endl;

    return 0;
}