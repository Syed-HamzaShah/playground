#include <iostream>
using namespace std;

int main()
{
    int array[] = { 4 , 2, 7 , 8 , 1 ,3 , 5};
    int size = sizeof(array)/sizeof(array[0]);

    int start = 0;
    int end = size -1;

    for (int i = 0 ; start < end ; i ++)
    {
        swap(array[start] ,array[end]);
        start ++;
        end --;
    }

    for (int j = 0 ; j < size ; j++){
        cout<<array[j]<<" , ";
    }


    return 0;
}