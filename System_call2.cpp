#include<iostream>
using namespace std;
#include<dirent.h>

struct dirent *dptr
{

};

int main()
{
int argc;
char* argv[100];
char buff[100];
DIR *dirp;

cout<<"Enter dir name:";
cin>>buff;

if((dirp=opendir(buff))==NULL)
{
    cout<<"The given directory does not exist";
    exit(1);
}
while(dptr=readdir(dirp))
{
cout<<endl<<dptr->d_name;
}
closedir(dirp);
}
