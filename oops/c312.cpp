#include <iostream>

using namespace std;

class B1
{
  public:
  int y;
  B1(int a)
  {
     y=a;
     cout<<"B1\t"<<y<<"\n";
  }
};
class B2
{
  public:
  int x;
  B2(int a)
  {
     x=a;
     cout<<"B2\t"<<x<<"\n";
  }
};
class D:public B1,public B2
{
  public:
  int p;
  D(int a,int b,int c):B1(b),B2(a)
  {
     p=c;
     cout<<"D\t"<<p<<"\n";
  }
};

int main()
{
    int p,q,r;
    cout<<"a b c\t";
    cin>>p>>q>>r;
    D d(p,q,r);
    return 0;
}
