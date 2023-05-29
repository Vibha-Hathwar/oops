#include<iostream>
using namespace std;
class stu
{
    char name[31];
    int sem;
    char usn[11];
    public:
        void ged();
        void pud()
        {
            cout<<endl<<name<<"\t"<<sem<<"\t"<<usn<<endl;
        }
        int sm(int);
};
void stu::ged()
{
    cout<<"enter name usn sem "<<endl;
    cin>>name>>usn>>sem;
}
int stu::sm(int s)
{
    if(sem==s)
        return 1;
    else
        return 0;
}
int main()
{
    stu s[5];
    int i,n,c[5],res=0;
    cout<<"enter 5 student details ";
    for(i=0;i<5;i++)
        s[i].ged();
    cout<<"\ngiven student details are";
    cout<<endl<<"Name\tSem\tUSN\n";
    for(i=0;i<5;i++)
        s[i].pud();
    cout<<"\nenter sem ";
    cin>>n;
    for(i=0;i<5;i++)
    {
        c[i]=s[i].sm(n);
        res=c[i]+res;
    }
    cout<<"\ntotal = "<<res<<endl;
    return 0;
}
