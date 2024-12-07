#include <iostream>
using namespace std;

void pushFromBack(int queue[], int &left, int &right, int max, int value)
{
}

void pushFromFront(int queue[], int &left, int &right, int max, int value)
{
    if (left == 0 && right == max - 1 || left == right + 1)
        cout << "Queue is full!" << endl;
    else if (left == -1 && right == -1)
    {
        left++, right++;
        queue[right] = value;
        cout << "Value Added!" << endl;
    }
    else if (right == max - 1 && left > 0)
    {
        right = 0;
        queue[right] = value;
        cout << "Value Added!" << endl;
    }
    else
    {
        right++;
        queue[right] = value;
        cout << "Value Added!" << endl;
    }
}

void popFromBack();
void popFromFront();

void display(int queue[], int max)
{
    for (int i = 0; i < max; i++)
        cout << queue[i] << ' ';
    cout << endl;
}

int main()
{
    int max = 7;
    int queue[max];
    int left = -1;
    int right = -1;

    return 0;
}