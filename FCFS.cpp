#include<iostream>
using namespace std;
int main()
{
    int busrtTime[20],waitTime[20],TAT[20],num;
    float wtavg,tatavg;
    cout<<"Enter the number of processes:";
    cin>>num;
    for(int i=0;i<num;i++)
{
    cout<<"Enter burst time for processor:";
    cin>>busrtTime[i];
}
waitTime[0]=wtavg=0;
TAT[0]=tatavg=0;
for(int i=1;i<num;i++)
{
    waitTime[i]=waitTime[i-1]+busrtTime[i-1];//waitTime=turnaround-busrt time
    TAT[i]=TAT[i-1]+busrtTime[i];
    wtavg=(wtavg+waitTime[i]);
    tatavg=(tatavg+TAT[i]);

}
cout<<"\tPROCESS \t BURST TIME \t WAITING TIME \t TURNAROUND TIME ";
for(int i=0;i<num;i++)
{
    cout<<"\n \t\t"<<i+1<<"\t\t"<<busrtTime[i]<<"\t\t"<<waitTime[i]<<"\t\t"<<TAT[i];
    // cout<<"\n Average Waiting Time:"<<wtavg<<endl;
    // cout<<"\n Average Turnaround Time :"<<tatavg<<endl;
}
wtavg /=num;
tatavg /=num;
cout<<"\n Average Waiting Time:"<<wtavg<<endl;
cout<<"\n Average Turnaround Time :"<<tatavg<<endl;
return 0;
}