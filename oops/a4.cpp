#include<iostream>
#include<iomanip>

using namespace std;
class crickt
{
    char name[21];
    int ide,runs;
    float avg;
    public:
        void com()
        {
            avg=runs/5.0;
        }
        void disp()
        {
            cout<<setw(5)<<ide<<setw(10)<<name<<setw(5)<<runs<<setw(7)<<avg<<endl;
        }
        void ged()
        {
            cout<<"Name ";cin>>name;
            cout<<"ID ";cin>>ide;
            cout<<"total runs in 5 matches ";cin>>runs;
        }
};
int main()
{
    crickt c[11];
    cout<<"enter 11 players details "<<endl;
    for(int i=0;i<11;i++)
    {
        c[i].ged();
        //cout<<"avg = ";
        c[i].com();
    }
     cout<<setw(5)<<"ID"<<setw(10)<<"name"<<setw(5)<<"run"<<setw(7)<<"avg"<<endl;
    for(int i=0;i<11;i++)
    {
        c[i].disp();
        cout<<"\n";
    }
    return 0;
}
