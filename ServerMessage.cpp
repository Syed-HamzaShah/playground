#include <windows.h>
#include <iostream>
#include <conio.h>
#include <string>

#define PIPE_NAME "\\\\.\\pipe\\MyPipe"
#define BUFFER_SIZE 256

using namespace std;

int main()
{

    HANDLE hPipe;
    char buffer[BUFFER_SIZE];
    DWORD bytesRead, bytesWritten;

    hPipe = CreateNamedPipe(
        PIPE_NAME,
        PIPE_ACCESS_DUPLEX,
        PIPE_TYPE_MESSAGE |
            PIPE_READMODE_MESSAGE |
            PIPE_WAIT,
        1,
        BUFFER_SIZE,
        BUFFER_SIZE,
        0,
        NULL);

    if (hPipe == INVALID_HANDLE_VALUE)
    {
        cerr << "Error: Unable to create named pipe. Code: " << GetLastError() << endl;
        return 1;
    }

    cout << "Waiting for client to connect..." << endl;

    bool isConnected = ConnectNamedPipe(hPipe, NULL) ? true : (GetLastError() == ERROR_PIPE_CONNECTED);
    if (!isConnected)
    {
        cerr << "Error: Unable to connect named pipe. Code: " << GetLastError() << endl;
        CloseHandle(hPipe);
        return 1;
    }

    cout << "Client connected." << endl;

    while (true)
    {

        if (!ReadFile(hPipe, buffer, BUFFER_SIZE, &bytesRead, NULL))
        {
            cerr << "Error: Unable to read from pipe. Code " << GetLastError() << endl;
            break;
        }

        buffer[bytesRead] = '\0';
        cout << "Recieved from client: " << buffer << endl;

        if (strcmp(buffer, "exit") == 0)
        {
            cout << "Exiting server." << endl;
            break;
        }

        string response = "Server: " + string(buffer);
        if (!WriteFile(hPipe, response.c_str(), response.length() + 1, &bytesWritten, NULL))
        {
            cerr << "Error: Unable to write to pipe. Code: " << GetLastError() << endl;
            break;
        }
    }

    CloseHandle(hPipe);
    return 0;

    return 0;
}
