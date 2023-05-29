#include<iostream>
using namespace std;
class complex
{
   float x,y;
   public:
    complex()
    {
       x=0;y=0;
    }
    complex(float a)
    {
        x=y=a;
    }
    complex(float a,float b)
    {
        x=a;y=b;    
    }
    friend complex add(complex,complex);
    friend void disp(complex);
};
complex add(complex c1,complex c2)
{
    complex t;
    t.x=c1.x+c2.x;
    t.y=c1.y+c2.y;
    return t;
    //return(c1.x+c2.x,c1.y+c2.y);    //error return(a,b)    disp x=a y=a
}
void disp(complex c)
{
        cout<<"\tx = "<<c.x<<"\ty = "<<c.y<<endl;
}    
int main()
{   
    cout<<"enter 3 input :";
    float p,q,r;
    cin>>p>>q>>r;
    complex c1(p,q),c2(r),c3;
    c3=add(c1,c2);
    disp(c1);disp(c2);disp(c3);
    return 0;
}
