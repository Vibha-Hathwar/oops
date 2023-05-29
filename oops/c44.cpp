#include<iostream>
using namespace std;
template<class T>
class sample
{
    T a,b;
    public:
    sample(T x,T y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"a = "<<a<<"\tb = "<<b<<"\n";
    }
};
int main()
{
    sample<int>t1(10,20);
    sample<float>t2(8.6,7.2);
    sample<char>t3('A','B');
    cout<<"Integer  ";t1.display();
    cout<<"char  ";t2.display();
    cout<<"char  ";t3.display();
    cout<<"float ";t2.display();
}
