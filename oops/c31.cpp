//single inheritance //private mode
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
class d:private b
{
    int c;
    public:
    void mul()
    {
       int x,y;
       cout<<"Enter a, b :";
       cin>>x>>y;
       setab(x,y);
       c=geta()*b;
    }
    void display()
    {
        showa();
        cout<<"b = "<<b<<"\tc = "<<c<<"\n";
    }
};
int main()
{
    d d1;
   // int a,b;
    d1.mul();
    d1.display();
    return 0;
}
