#include<iostream>
using namespace std;
void dis(int a)
{
    cout<<"\nInteger, exact matching\na = "<<a<<"\n";
}
template<class T>
void dis(T a)
{
    cout<<"\nTbemplate function\na = "<<a<<"\n";
}
template<class T1,class T2>
void dis(T1 a,T2 b)
{
    cout<<"\nfunction with template 2 arg\n";
    cout<<"a = "<<a<<"\nb = "<<b<<"\n";
}
int main()
{
    dis("Hello");
    dis('a');
    dis(100);
    dis(10,20);
    dis(10.86);
    return 0;
}
