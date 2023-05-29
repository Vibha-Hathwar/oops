#include<iostream>
using namespace std;

class stu
{
    char name[100],usn[11];
    int sem;
    public:
        void get();
        int sname(char *);    //search wrt name
        int susn(char *);     //search wrt usn
        int ssem(int);        //search wrt sem
        void disp()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"USN : "<<usn<<endl;
            cout<<"sem : "<<sem<<endl;
        }
};
void stu::get()
{
    cout<<"Enter name, usn, sem"<<endl;
    cin>>name>>usn>>sem;
}
int main()
{
    stu s1,s2;
    s1.get();
    s1.disp();
        /*qs1.sem=3;   error  sem private  */
    //s2=s1;
    //cout<<endl;
    //s2.disp();
    return 0;
}
