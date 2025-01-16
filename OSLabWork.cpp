#include <iostream>
using namespace std;

struct process
{
    int allocation[3];
    int max[3];
    int need[3];
    bool finish;
};

int main()
{
    int n, avail[3], work[3], flag, count = 0, sequence[10], k = 0;

    cout << "Enter the number of processes: ";
    cin >> n;

    process *p = new process[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the allocated resources for process " << i << " (3 values): ";
        cin >> p[i].allocation[0] >> p[i].allocation[1] >> p[i].allocation[2];

        cout << "Enter the maximum resources for process " << i << " (3 values): ";
        cin >> p[i].max[0] >> p[i].max[1] >> p[i].max[2];

        p[i].finish = false;

        for (int j = 0; j < 3; j++)
        {
            p[i].need[j] = p[i].max[j] - p[i].allocation[j];
        }
    }

    cout << "Enter the available resources (3 values): ";
    cin >> avail[0] >> avail[1] >> avail[2];

    for (int j = 0; j < 3; j++)
    {
        work[j] = avail[j];
    }

    while (count != n)
    {
        flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (!p[i].finish && p[i].need[0] <= work[0] && p[i].need[1] <= work[1] && p[i].need[2] <= work[2])
            {
                for (int j = 0; j < 3; j++)
                {
                    work[j] += p[i].allocation[j];
                }
                p[i].finish = true;
                sequence[k++] = i;
                flag = 1;
            }
        }

        if (flag == 0)
        {
            break;
        }
    }

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i].finish)
        {
            count++;
        }
    }

    cout << "The safe sequence is: ";
    if (count == n)
    {
        for (int i = 0; i < k; i++)
        {
            cout << "P" << sequence[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "SYSTEM IS NOT IN A SAFE STATE" << endl;
    }

    delete[] p;
    return 0;
}
