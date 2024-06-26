#include<iostream>
#include<dirent.h>
#include<cstdlib>

using namespace std;

int main()
{
    DIR *dirp; // Pointer to the directory
    struct dirent *dptr; // Structure to hold directory entry

    char buff[100]; // Buffer to hold directory name
    cout << "Enter dir name: ";
    cin >> buff; // User inputs the directory name

    // Attempt to open the directory
    if((dirp = opendir(buff)) == NULL)
    {
        cout << "The given directory does not exist";
        exit(1); // Exit if directory cannot be opened
    }

    // Read and print each directory entry
    while((dptr = readdir(dirp)) != NULL)
    {
        cout << endl << dptr->d_name;
    }

    closedir(dirp); // Close the directory
    return 0; // End of program
}
