#include <iostream>
using namespace std;

int main()
{
    int array[] = { 4 , 1 , 3 , 5 , 8 , 3};
    int size = sizeof(array)/sizeof(array[0]);

    int sum = 0;
    int product = 1;

    for(int i = 0 ; i < size ; i++ )
    {
        sum += array[i];
        product *= array[i];
    }

    cout<<"Sum is "<<sum<<endl;
    cout<<"Product is "<<product<<endl;

    return 0;
}