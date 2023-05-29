/*#include<iostream>
using namespace std;

void swap(int a,int b)
{
    int t=a;
    a=b;
    b=t;
}
int main()
{
    int x,y;
    cout<<"enter 2 int ";
    cin>>x>>y;
    cout<<"before swapping\nx = "<<x<<" y = "<<y;           //call by reference
    swap(x,y);                                              //input = output
    cout<<"\nafter swapping\nx = "<<x<<" y = "<<y;
    cout<<"\n";
    return 0;
}
*/
#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int x,y;
    cout<<"enter 2 int ";
    cin>>x>>y;
    cout<<"before swapping\nx = "<<x<<" y = "<<y;
    swap(&x,&y);
    cout<<"\nafter swapping\nx = "<<x<<" y = "<<y;
    cout<<"\n";
    return 0;
}
