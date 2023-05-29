//sum and average of 3 no
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter 3 nos  ";
    int a,b,c,sum;
    cin>>a>>b>>c;
    sum=a+b+c;
    float avg=sum/3;
    cout<<"sum = "<<sum<<"\navg = "<<avg;
    cout<<"\n";
    return 0;
}
