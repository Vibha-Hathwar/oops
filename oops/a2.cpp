#include<iostream>
using namespace std;

class no
{
    int x;
    public:
        void ged(int a)
        {x=a;}
        no pro(no n)
        {
            no temp;
            temp.x=x*n.x;
            return temp;
        }
        void pud()
        {cout<<x;}
};
int main()
{
    int a,b;
    no n1,n2,n3;
    cout<<"a = ";
    cin>>a;
    n1.ged(a);
    cout<<"b = ";
    cin>>b;
    n2.ged(b);
    n3=n1.pro(n2);
   // n1.pud();
    //cout<<"\n";
    //n2.pud();
    cout<<"\nProduct : ";
    n3.pud();
     cout<<"\n";
    return 0;
}
