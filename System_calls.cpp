#include<iostream>
#include<unistd.h>
#include<sys/types.h>
#include<cstdlib>

using namespace std;

int main()
{
    pid_t pid = fork(); // Fork a new process
    if(pid == -1)
    {
        cout << "Error in Process creation ";
        exit(1); // Exit if fork fails
    }
    if(pid != 0)
    {
        // This is the parent process
        pid_t pid1 = getpid(); // Get the parent process ID
        cout << "Parent process id is :" << pid1 << endl;
    }
    else
    {
        // This is the child process
        pid_t pid2 = getpid(); // Get the child process ID
        cout << "Child process id is :" << pid2 << endl;
    }
    return 0; // End of program
}
