#include<iostream>
using namespace std;
class complex
{
    int x,y;
   public:
    void ged(int a,int b)
    {
        x=a;y=b;
    }
    void disp()
    {
        cout<<"\t"<<x<<"+"<<y<<"i"<<endl;
    }
    friend complex add(complex,complex);
};
complex add(complex s1,complex s2)
{
    complex s;
    s.x=s1.x+s2.x;
    s.y=s1.y+s2.y;
    return s;
}
int main()
{
    complex s1,s2,s3;
    int a,b,c,d;
    cout<<"enter real and imaginary part of 1st complex no ";
    cin>>a>>b;
    s1.ged(a,b);
    cout<<"enter real and imaginary part of 2nd complex no ";
    cin>>c>>d;
    s2.ged(c,d);
    s3=add(s1,s2);
    cout<<"\n";
    s1.disp();
    s2.disp();
    cout<<"\nsum\n";
    s3.disp();
    return 0;
}
