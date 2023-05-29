#include<iostream>
using namespace std;
template<class T>
class sample
{
    T a,b;
    public:
    void getd(T x,T y);
    void display()
    {
        cout<<"a = "<<a<<"\tb = "<<b<<"\n";
    }
};
void sample<T>::getd(T x,T y)
{
        a=x;b=y;
}
int main()
{
    sample<int>s1;
    sample<float>s2;
    s1.getd(10.8,20.6);
    s2.getd(5.6,7.4);
    s1.display();
    s2.display();
    return 0;
}
