#include <iostream>
using namespace std;
struct fcfs
{
    int pid;
    int btime;
    int wtime;
    int ttime;

}
p[10];
int main()
{
    int num,i;
    int towtime=0,totttime=0;
    cout<<"fcfs scheduling.."<<endl;
    cout<<"ENter the no. of process:";
    cin>>num;
    for(int i=1;i<num;i++)
    {
        p[i].pid=1;
        cout<<"Burst time of the process";
        cin>>p[i].btime;
        
    }
    p[0].wtime=0;
    p[0].ttime=p[0].btime;
    totttime+=p[i].ttime;
    for(int i=0;i<num;i++)
    {
     p[i].wtime=p[i-1].wtime+p[i-1].btime;
     p[i].ttime=p[i].wtime+p[i].btime;
     totttime+=p[i].ttime;
     towtime+=p[i].wtime;
    }

    for(int i=1;i<num;i++)
    {
        cout<<"Waiting time for process: ";
        cout<<"Turnaround Time for process:";
        cout<<endl;
    }
    cout<<"\n Total waiting time:"<<towtime;
    cout<<"\n Average waiting time :"<<(float)towtime;
    cout<<"\n Total turn around time :"<<totttime;
    cout<<"\n Avergae turn around time :"<<(float)totttime;

    return 0;
}
