#include <iostream>
using namespace std;

int UniqueSearch ( int array[] , int size);

int main(){
    int array[] = {1 , 2 , 3 , 4 , 1 , 2 , 3};
    int size =sizeof(array) / sizeof(array[0]);

    int unique = UniqueSearch(array , size);

    if (unique != -1)
    cout<<unique<<endl;
    else
    cout<<"No Unique Element";

    return 0;
}


int UniqueSearch ( int array[] , int size)
{
     for (int i = 0 ; i < size - 1 ; i++)
    {
        bool unique = true;
        for (int j = i+1 ; j < size ; j++)
        {
            if(array[i] == array[j])
            {
                unique = false;
                break;
            }
        }
        if(unique)
        return array[i];
    }
    return -1;
}