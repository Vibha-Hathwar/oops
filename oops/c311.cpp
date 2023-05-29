#include <iostream>

using namespace std;

class A
{
  protected:
    int x;
  public:
  A(int a)
  {
     x=a;
  }
};
class B:public A
{
  int y;
  public:
  B(int a,int b):A(b)
  {
     y=a;
  }
  void show()
  {
     cout<<"x = "<<x<<"\nY = "<<y<<"\n";
  }
};

int main()
{
    int p,q;
    cout<<"a,b\t";
    cin>>p>>q;
    B b(p,q);
    b.show();
    return 0;
}
