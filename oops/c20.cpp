#include<iostream>            //CONSTUCTORS
using namespace std;
class sample
{
    int a,b;
   public:
    sample()
    {
       a=0;b=0;
    }
    //sample(int a=10,int b=0)      //contr with default arg    //incomplete
    sample(int x)
    {
        a=b=x;
    }
    sample(int x,int y);
    sample(int x,int y,int z)
    {
        a=x+y;
        b=z;
    }
    sample(sample &s)
    {
        a=s.a;
        b=s.b;
    }
    void disp()
    {
        cout<<"\na = "<<a<<"\tb = "<<b;
    }
};
sample::sample(int p,int q)
{
    a=p;b=q;
}
int main()
{   
    int a,b,c;
    cout<<"object 1 created\n";
    sample s1;
    cout<<"default constructor\n"<<endl;
    cout<<"object 2 created\n";
    cout<<"parameterised constructor\n";
    sample s2;
    cout<<"\nobject 5 created\n";
    cout<<"copy constructor\n";   
    cout<<"\nenter a, b, c : ";
    cin>>a>>b>>c;
    s2=sample(a);
    cout<<"\n";
    sample s3(a,b);
    sample s4(a,b,c);
    sample s5(s3);
    s1.disp();s2.disp();
    s3.disp();s4.disp();s5.disp();
    cout<<"\n";
    return 0;
}
