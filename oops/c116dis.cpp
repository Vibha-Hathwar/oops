#include<iostream>
#include<cmath>

using namespace std;

class point
{
    int x,y;
  public:
    void ged(int a,int b)
    {   x=a;y=b;    }
    void pud()
    {
        cout<<"x = "<<x<<"\ty = "<<y<<endl;   
    }
    /*
    void dist(point p1,point p2)
    {
        float d;
        d=sqrt(((p2.x-p1.x)*(p2.x-p1.x))+((p2.y-p1.y)*(p2.y-p1.y)));
        cout<<"\ndist = "<<d<<endl;
    }
    */
    void dist(point p)
    {
        float d;
        d=sqrt(((p.x-x)*(p.x-x))+((p.y-y)*(p.y-y)));
        cout<<"\ndist = "<<d<<endl;
    }
};
int main()
{
    point p1,p2;
    int a,b,c,d;
    cout<<" enter a, b ";
    cin>>a>>b;
    p1.ged(a,b);
    cout<<" enter c, d ";
    cin>>c>>d;
    p2.ged(c,d);
    cout<<endl;
    p1.pud();
    p2.pud();
    p1.dist(p2);
    //p1.dist(p1,p2);
    return 0;
}
