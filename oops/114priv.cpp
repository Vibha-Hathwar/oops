#include<iostream>
using namespace std;
class sample
{
    int a,b;
    void display()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
    public:
    void getd(int x,int y)
    {
        a=x;
        b=y;
        display();
    }
    void update(int x)
    {
        a=a+x;
        b=b+x;
        display();
    }
};
int main()
{
    sample s1;
    int a,b,c;
    cout<<"enter 2 int ";
    cin>>a>>b;
    s1.getd(a,b);
    cout<<"update by ";
    cin>>c;
    s1.update(c);
    return 0;
}
