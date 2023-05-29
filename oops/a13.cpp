#include<iostream>
#include<iomanip>
using namespace std;

class stu
{
    char name[21],acc[21];
    int b;
    public:
        void ged()
        {
            cout<<"\nName ";
            cin>>name;
            cout<<"acc no ";
             cin>>acc;
            cout<<"balance ";
            cin>>b;
        }
        void dep()
        {
            int d;
            cout<<"\nenter amount to deposite ";cin>>d;
            b=b+d;
            cout<<"current balance = "<<b<<endl;
        }
        void disp()
        {
            cout<<setw(10)<<"\nname "<<name<<setw(10)<<"\naccount no "<<acc<<setw(10)<<"\nbalance "<<b<<endl;
        }
        void drw()
        {
            int w;
            cout<<"\nenter amount to withdraw ";cin>>w;
            if(w>b)
                cout<<"low balance "<<b<<endl;
            else
            {
                b=b-w;
                cout<<"successful withdrawl\nCurrent nalance "<<b<<endl;
            }
        }

};
int main()
{
    stu b;
    b.ged();
    b.disp();
    b.dep();
    b.drw();
    cout<<endl;
    return 0;
}
