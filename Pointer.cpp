#include <iostream>
using namespace std;

// Pass by Reference(alias)
void fun1(int &alias)
{
    alias = 20;
}

// Pass by Pointer
void fun2(int *ptr)
{
    *ptr = 20;
}

int main()
{
    int a = 12;
    int *aptr = &a;
    int **Paptr = &aptr;

    cout << a << endl;
    cout << aptr << endl;
    cout << Paptr << endl;

    // Dereference
    cout << *(&a) << endl;
    cout << *(aptr) << endl;
    cout << **(Paptr) << endl;

    // NULL Pointer
    int *ptr = NULL;
    // cout<<*ptr<<endl; Cant access because it is pointing to no memory address

    return 0;
}