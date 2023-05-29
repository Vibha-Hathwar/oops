#include<iostream>
using namespace std;
class abc;
class xyz
{
    int x;
   public:
    void ged(int a)
    {   x=a;    }
    void pud()
    {   cout<<"\nx = "<<x<<endl;  }
    friend int max(abc,xyz);
};
class abc
{
    int y;
   public:
    void ged(int a)
    {   y=a;    }
    void pud()
    {   cout<<"y = "<<y<<endl;  }
    friend int max(abc,xyz);
};
int max(abc a1,xyz x1)
{
    if(a1.y>x1.x)
        return a1.y;
    else
        return x1.x;
}
int main()
{
    xyz s1;
    abc s2;
    int a,b;
    cout<<"enter a, b ";
    cin>>a>>b;
    s1.ged(a);
    s2.ged(b);
    s1.pud();
    s2.pud();
    cout<<"max = "<<max(s2,s1)<<endl;
    return 0;
}
