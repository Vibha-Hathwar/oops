#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int t=a;                                          //using reference variable
    a=b;                                              //swap(x,y)
    b=t;                                              //void swap(&x,&y){  }
}
int main()
{
    int x,y;
    cout<<"enter 2 int ";
    cin>>x>>y;
    cout<<"before swapping\nx = "<<x<<" y = "<<y;
    swap(x,y);
    cout<<"\nafter swapping\nx = "<<x<<" y = "<<y;
    cout<<"\n";
    return 0;
}
