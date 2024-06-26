#include<iostream>
using namespace std;
struct process{
    int pid;
    int bt;
    int wt;
    int tt;
    int prior;
}
p[10],temp;

int main()
{
    int i,j,n,totwt,tottt,arg1,arg2;

    cout<<"Enter the number of process:";
    cin>>n;

    for(i=0;i<=n;i++)
    {
        p[i].pid=i;

        cout<<"Enter the burst time:";
        cin>>p[i].bt;
        cout<<"Enter the priority:";
        cin>>p[i].prior;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(p[i].prior>p[j].prior)
            {
                temp.pid=p[i].pid;
                p[i].pid=p[j].pid;
                p[j].pid=temp.pid;
                temp.bt=p[i].bt;
                p[i].bt=p[j].bt;
                p[j].bt=temp.bt;
                temp.prior=p[i].prior;
                p[j].prior=temp.prior;
            }
        }
    }
    p[i].wt=0;
    p[1].tt=p[1].bt+p[1].wt;
    i=2;
    while(i<=n)
    {
        p[i].wt=p[i-1].bt+p[i-1].wt;
        p[i].tt=p[i].bt+p[i].wt;
        i++;
    }

    i=1;
    totwt=tottt=0;
    cout<<"\n process to \t bt \t wt \t tt"<<endl;
    while(i<=n)
    {
        cout<<p[i].pid,p[i].bt,p[i].wt,p[i].tt;
        totwt=p[i].wt+totwt;
        tottt=p[i].tt+tottt;
        i++;
    }
    arg1=totwt/n;
    arg2=tottt/n;
    cout<<"\t arg1="<<arg1<<"\t arg2="<<arg2;

    return 0;



}
