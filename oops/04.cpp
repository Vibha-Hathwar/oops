/*
    write a program using function to check if a number is amstrong or not
*/
//armstrong
#include<iostream>
#include<cmath>
using namespace std;

void ams(int n)
{
    int m,rem,sum=0;
    m=n;
    while(rem!=0)
    {
        rem=n%10;
        sum=sum+pow(rem,3);
        n=n/10;
    }
    if(m==sum)
        cout<<m<<" is amstrong\n";
    else
        cout<<m<<" is NOT amstrong\n";
}
int main()
{
    int n;
    cout<<"enter a number ";
    cin>>n;
    ams(n);
}
