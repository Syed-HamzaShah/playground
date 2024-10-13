#include <iostream>
using namespace std;

int main(){
    int array[ ] = { 1 , 3  , 4 , 6 , 7 , 9 };
    int size = sizeof(array) / sizeof(int);

    for (int i = 0 ; i<size ;i++)
    {
        for(int j = i ; j<size ; j++)
        {
            for (int k = i; k < size; k++)
            {
                cout<<array[k]<<' '<<endl;    
            }
        }
            cout<<endl;
    }


    return 0;
}