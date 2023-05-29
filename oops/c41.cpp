#include <iostream>

using namespace std;

template <class T>

void print(T a)
{
   cout<<a<<"\n";
}

int main()
{
    cout<<"\nint ";print(10);
    cout<<"\nfloat ";print(110.8f);
    cout<<"\nchar ";print('B');
    cout<<"\ndouble ";print(1000.867);
    cout<<"\nstring ";print("hello");
    return 0;
}
