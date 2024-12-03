#include <iostream>
using namespace std;

void en_queue(int array[], int &end, int capacity, int &value)
{
    if (end == capacity)
        cout << "The Queue is Full!" << endl;
    else
    {
        array[end] = value;
        end++;
        cout << "Value Added!" << endl;
    }
}

void de_queue(int array[], int &start, int &end)
{
    if (start == -1 && end == -1)
        cout << "The Queue is Empty!" << endl;
    else if (start == 0 && end == 0)
    {
        end--;
        start--;
        cout << "Value Poped" << endl;
    }
    else
    {
        for (int i = 0; i < end; i++)
        {
            array[i] = array[i + 1];
        }
        end--;
        cout << "Value Poped" << endl;
    }
}

void display(int array[], int start, int end)
{
    for (int i = start; i < end; i++)
        cout << array[i] << ends;
    cout << endl;
}

int main()
{
    int capacity = 10;
    int array[capacity] = {1, 2, 3, 4, 5};
    int start = 0;
    int end = 5;
    int value = 2;

    display(array, start, end);
    en_queue(array, end, capacity, value);
    display(array, start, end);
    de_queue(array, start, end);
    display(array, start, end);
    de_queue(array, start, end);
    de_queue(array, start, end);
    de_queue(array, start, end);
    de_queue(array, start, end);
    de_queue(array, start, end);
    de_queue(array, start, end);
    de_queue(array, start, end);

    return 0;
}