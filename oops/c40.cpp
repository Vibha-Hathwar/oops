#include <iostream>

using namespace std;

template <class T>

T large(T a,T b)
{
   return a>b?a:b;
}

int main()
{
    /*
    cout<<"int "<<large(10,8);
    cout<<"float "<<large(10.8,11.6);
    cout<<"char "<<large('a','L');
    */
    int p,q;float r,s;char m,n;
    cout<<"find largest using template";
    cout<<"\nenter 2 int ";
    cin>>p>>q;
    cout<<large(p,q);
    cout<<"\nenter 2 float ";
    cin>>r>>s;
    cout<<large(r,s);
    cout<<"\nenter 2 char ";
    cin>>m>>n;
    cout<<large(m,n);
    return 0;
}
