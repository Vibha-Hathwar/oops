//single inheritance //public mode
#include<iostream>
using namespace std;
class b
{
    int a;
    public:
    int b;
    void setab(int x,int y)
    {
       a=x;
       b=y; 
    }
    int geta()
    {
        return a;
    }
    void showa()
    {
        cout<<"a = "<<a<<"\t";
    }
};
class d:public b
{
    int c;
    public:
    void mul()
    {
       c=geta()*b;
    }
    void display()
    {
        cout<<"b = "<<b<<"\tc = "<<c<<"\n";
    }
};
int main()
{
    d d1;
    int a,b;
    cout<<"Enter a, b :";
    cin>>a>>b;
    d1.setab(a,b);
    d1.mul();
    d1.showa();
    d1.display();
    return 0;
}
