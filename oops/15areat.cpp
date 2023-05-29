//area of triangle

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    float a,b,c;                              //sides of triangle are valid if a+b>c
    float A,s;
    cout<<"enter length of sides of triangle ";
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"area of triangle = "<<fixed<<setprecision(2)<<A<<" sq units"<<endl;   
}

/*
int main()
{
    float b,h,A;
    cout<<"enter  b, h of triangle ";
    cin>>b>>h;
    A=0.5*b*h;
    cout<<"Area = "<<A<<" sq units\n";
    return 0;
}
*/
