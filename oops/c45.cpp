#include<iostream>
//#include<string>
using namespace std;
template<class T1,class T2>
class sample
{
    T1 a;T2 b;
    public:
    sample(T1 x,T2 y)
    {
        a=x;b=y;
    }
    void display()
    {
        cout<<"a = "<<a<<"\tb = "<<b<<"\n";
    }
};
int main()
{
    sample<int,float>t1(10,2.8);
    sample<float,char>t2(10.2,'c');
    sample<int,string>t3(100,"Hello");
    cout<<"int float  ";t1.display();
    cout<<"int string  ";t3.display();
    cout<<"float char  ";t2.display();
    return 0;
}
