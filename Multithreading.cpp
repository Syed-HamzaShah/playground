#include <iostream>
#include <thread>
#include <mutex>

using namespace std;
int a = 9, b = 7;

mutex mux;

void add()
{
    lock_guard<mutex> lock(mux);
    cout << a + b << endl;
}

void sub()
{
    lock_guard<mutex> lock(mux);
    cout << a - b << endl;
}

void divide()
{
    lock_guard<mutex> lock(mux);
    if (b == 0)
        cout << "Divide Not possible" << endl;
    else
        cout << a / b << endl;
}

void mult()
{
    lock_guard<mutex> lock(mux);
    cout << a * b << endl;
}
int main()
{
    thread t1(add);
    thread t2(sub);
    thread t3(divide);
    thread t4(mult);
    t1.join();
    t2.join();
    t3.join();
    t4.join();

    return 0;
}