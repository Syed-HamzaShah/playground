#include <iostream>
#include <vector>
using namespace std;

bool detectDeadlock(vector<vector<int>> &allocation, vector<vector<int>> &request, vector<int> &available, int processes, int resources)
{
    vector<int> work = available;
    vector<bool> finish(processes, false);

    bool deadlockExists = false;
    while (true)
    {
        bool foundProcess = false;

        for (int i = 0; i < processes; i++)
        {
            if (!finish[i])
            {
                bool canProceed = true;
                for (int j = 0; j < resources; j++)
                {
                    if (request[i][j] > work[j])
                    {
                        canProceed = false;
                        break;
                    }
                }
                if (canProceed)
                {
                    for (int j = 0; j < resources; j++)
                    {
                        work[j] += allocation[i][j];
                    }
                    finish[i] = true;
                    foundProcess = true;
                }
            }
        }
        if (!foundProcess)
        {
            break;
        }
    }

    cout << "Deadlocked Processes: ";
    for (int i = 0; i < processes; ++i)
    {
        if (!finish[i])
        {
            cout << "P" << i << " ";
            deadlockExists = true;
        }
    }

    if (!deadlockExists)
    {
        cout << "None";
    }
    cout << endl;

    return deadlockExists;
}

int main()
{
    int processes, resources;
    cout << "Enter the number of processes: ";
    cin >> processes;
    cout << "Enter the number of resources: ";
    cin >> resources;

    vector<vector<int>> allocation(processes, vector<int>(resources));
    vector<vector<int>> request(processes, vector<int>(resources));
    vector<int> available(resources);

    cout << "Enter the allocated Resources:\n";
    for (int i = 0; i < processes; i++)
    {
        for (int j = 0; j < resources; j++)
        {
            cin >> allocation[i][j];
        }
    }

    cout << "Enter the max required resources:\n";
    for (int i = 0; i < processes; i++)
    {
        for (int j = 0; j < resources; j++)
        {
            cin >> request[i][j];
        }
    }

    cout << "Enter the available resources:\n";
    for (int i = 0; i < resources; i++)
    {
        cin >> available[i];
    }

    if (detectDeadlock(allocation, request, available, processes, resources))
    {
        cout << "Deadlock detected!" << endl;
    }
    else
    {
        cout << "No Deadlock" << endl;
    }

    return 0;
}