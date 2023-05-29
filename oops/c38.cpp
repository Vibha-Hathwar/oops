#include <iostream>

using namespace std;

class B
{
  public:
  B()
  {
     cout<<"base class constructor\n";
  }
};
class D:public B
{
  public:
  D()
  {
     cout<<"derived class constructor\n";
  }
};

int main()
{
    D d;
    return 0;
}
