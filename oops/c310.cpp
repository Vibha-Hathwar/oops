#include <iostream>

using namespace std;

class B1
{
  public:
  B1()
  {
     cout<<"B1\n";
  }
};
class B2:public B1
{
  public:
  B2()
  {
     cout<<"B2\n";
  }
};
class D:public B2
{
  public:
  D()
  {
     cout<<"D\n";
  }
};

int main()
{
    D d;
    return 0;
}
