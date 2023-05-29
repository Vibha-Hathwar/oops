#include<iostream>
#include<iomanip>
using namespace std;

class stu
{
    char name[21],usn[21];
    int m1,m2,m3;
    float avg=0;
    public:
        void ged();
        void disp();
        void calc();
};
void stu::ged()
{
    cout<<"\nName ";
    cin>>name;
    cout<<"usn ";
    cin>>usn;
    cout<<"marks1 ";
    cin>>m1;
    cout<<"marks2 ";
    cin>>m2;
    cout<<"marks3 ";
    cin>>m3; 
}
void stu::disp()
{
    cout<<setw(10)<<name<<setw(10)<<usn<<setw(10)<<m1<<setw(10)<<m2<<setw(10)<<m3<<setw(10)<<avg<<endl;
}
void stu::calc()
{
    int b1,b2;
    if(m1>m2)
    {
        b1=m1;
        if(m2>m3)
            b2=m2;
        else
            b2=m3;
    }
    else
    {
        b1=m2;
        if(m1>m3)
            b2=m1;
        else
            b2=m3;
    }
    avg=(b1+b2)/2;
    cout<<"avg = "<<avg<<endl;
}
int main()
{
    int n;
    cout<<"enter no of students : ";
    cin>>n;
    stu s[n];
    for(int i=0;i<n;i++)
    {
        s[i].ged();
        s[i].calc();
    }
    cout<<endl<<setw(10)<<"Name"<<setw(10)<<"USN"<<setw(10)<<"Mark1"<<setw(10)<<"Mark2"<<setw(10)<<"Mark3"<<setw(10)<<"Avg"<<endl;
    for(int i=0;i<n;i++)
        s[i].disp();
    return 0;
}
