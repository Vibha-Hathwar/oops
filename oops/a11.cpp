#include<iostream>
#include<iomanip>
using namespace std;
class emp
{
    char name[20];
    int s,h;
    public:
        void display()
        {
            cout<<setw(10)<<name<<setw(10)<<s<<setw(10)<<h<<endl;
        }
        void get()
        {
            cout<<"\nname ";cin>>name;
            cout<<"salary ";cin>>s;
            cout<<"hrs working/day  ";cin>>h;
        }
        void sal()
        {
            if(s<25000)
               s=s+1000;
        }
        void wrk()
        {
            if(h>6)
                s=s+500;
        }
};
int main()
{
    int n,h,r,i;
    int sl=0;
    cout<<"no of emp ";
    cin>>n;
    emp e[n];
    cout<<"details\n";
    for(int i=0;i<n;i++)
        e[i].get();
    for(int i=0;i<n;i++)
    {
        e[i].sal();
        e[i].wrk();
    }
     cout<<endl<<setw(10)<<"name"<<setw(10)<<"salary"<<setw(20)<<"working hrs/day"<<endl;
    for(int i=0;i<n;i++)
        e[i].display();
    return 0;
}
