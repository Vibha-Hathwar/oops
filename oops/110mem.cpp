#include<iostream>
using namespace std;

int main()
{
    int *p1=new int(8);
    cout<<"p1 = "<<*p1<<endl;
    float *p2=new float(10.8);
    cout<<"p2 = "<<*p2<<endl;
    cout<<"\n";
    int *p=NULL;
    p=new int;
    if(!p)
        cout<<"Allocation failed";
    else
    {
        *p=100;
        cout<<"value of p = "<<*p;
    }    
    cout<<"\n";
    int *p4;
    cout<<"\nenter an int ";
    cin>>*p4;
    cout<<"p4 = "<<*p4;
    cout<<"\n";
    
    int *p3;
    p3=new int[5];
    cout<<"\n";
    cout<<"Enter 5 int ";
    for(int i=0;i<5;i++)
        cin>>p3[i];
    cout<<"\n";
    cout<<"Array elements ";
    for(int i=0;i<5;i++)
        cout<<" "<<p3[i];
    cout<<"\n";
    delete p1;
    delete p2;
    delete []p3;
    return 0;
}
