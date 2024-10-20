#include <iostream>
using namespace std;

int main()
{
    int number = 3;
    int power = 6;

    int binaryForm = power;
    int temporaryMultiple = number;
    int ans = 1;

    while (binaryForm > 0)
    {
        if (binaryForm % 2 == 1)
        {
            ans *= temporaryMultiple;
        }

        temporaryMultiple *= temporaryMultiple;

        binaryForm /= 2;
    }

    cout << ans << endl;

    return 0;
}