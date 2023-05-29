#include <iostream>

using namespace std;

template<class T1,class T2>

void product(T1 a,T2 b)
{
   cout<<a*b<<"\n";
}

int main()
{
     cout<<"int * float = ";product(10,11.4f);
     cout<<"float * double = ";product(10.8f,11.48);
     cout<<"int * double = ";product(10,12.345);
    return 0;
}
