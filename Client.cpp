#include <windows.h>
#include <iostream>
#include <string>

#define PIPE_NAME "\\\\.\\pipe\\MyPipe"
#define BUFFER_SIZE 256

using namespace std;

int main()
{
    HANDLE hPipe;
    char buffer[BUFFER_SIZE];
    DWORD bytesRead, bytesWritten;

    while (true)
    {
        hPipe = CreateFile(
            PIPE_NAME,
            GENERIC_READ |
                GENERIC_WRITE,
            0,
            NULL,
            OPEN_EXISTING,
            0,
            NULL);

        if (hPipe != INVALID_HANDLE_VALUE)
            break;

        if (GetLastError() == ERROR_PIPE_BUSY)
        {
            cout << "Waiting for the pipe to become available..." << endl;
            if (!WaitNamedPipe(PIPE_NAME, 5000))
            {
                cerr << "Error: Pipe is busy, ans wait timed out." << endl;
                return 1;
            }
        }
        else
        {
            cerr << "Error: Unable to connect to pipe. Code: " << GetLastError() << endl;
            return 1;
        }

        cout << "Connected to the server!" << endl;

        string message;
        while (true)
        {
            cout << "Enter message to send (type 'exit' to quit): ";
            getline(cin, message);

            if (!WriteFile(hPipe, message.c_str(), message.length() + 1, &bytesWritten, NULL))
            {
                cerr << "Error: Unable to write to pipe. Code: " << GetLastError() << endl;
                break;
            }

            if (message == "exit")
            {
                cout << "Exiting client." << endl;
                break;
            }

            if (!ReadFile(hPipe, buffer, BUFFER_SIZE, &bytesRead, NULL))
            {
                cerr << "Error: Unable to read from pipe. Code: " << GetLastError() << endl;
                break;
            }

            buffer[bytesRead] = '\0';
            cout << "Recieved from server: " << buffer << endl;
        }

        CloseHandle(hPipe);
        return 0;
    }
    return 0;
}