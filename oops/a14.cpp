#include<iostream>
#include<iomanip>
using namespace std;

class stu
{
    char name[21],usn[21];
    int m[5];
    friend void comp(stu);
    public:
        void ged()
        {
            cout<<"\nName ";
            cin>>name;
            cout<<"roll no ";
            cin>>usn;
            cout<<"marks of 5 subjects\n";
            for(int i=0;i<5;i++)
                cin>>m[i];
        }
};
void comp(stu s)
{
    float p=0;
    for(int i=0;i<5;i++)
        p=p+s.m[i];
    p=(p/500)*100;
    cout<<"percentage = "<<p<<endl;
}
int main()
{
    int n;
    cout<<"enter no of students : ";
    cin>>n;
    stu s[n];               //error        //s undeclared
    for(int i=0;i<n;i++)
    {
        s[i].ged();
        comp(s[i]);
    }
   // cout<<endl<<setw(10)<<"Name"<<setw(10)<<"USN"<<setw(10)<<"Mark1"<<setw(10)<<"Mark2"<<setw(10)<<"Mark3"<<setw(10)<<"Avg"<<endl;
    //for(int i=0;i<n;i++)
      //  s[i].disp();
    return 0;
}
