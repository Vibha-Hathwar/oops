/
#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
int sum(int a,int b,int c)
{
    return a+b+c;                                //function overloading
}
int sum(int a,int b,int c,int d)
{
    return a+b+c+d;
}
int main()
{
    cout<<"2 arg  sum(10,20)    =  "<<sum(10,20)<<endl;
    cout<<"3 arg  sum(10,2,6)   = "<<sum(10,2,6)<<endl;
    cout<<"4 arg  sum(10,8,6,5) = "<<sum(10,8,6,5)<<endl;
    return 0;
}
/
/
#include<iostream>
#include<cmath>
using namespace std;
int area(int a)
{
    return a*a;
}
double area(double a)                                   //float kottu -> argument deciml kottre error baratte
{
    return 3.141*a*a;
}
float area(int a,int b)
{
    return a*b;
}
float area(int a,int b,int c)
{
    float s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
    cout<<"square    (10)       =  "<<area(10)<<endl;
    cout<<"circle    (2.2)      =  "<<area(2.2)<<endl;       //radius 2  -> function float   run agutte
    cout<<"rectangle (10,4)     =  "<<area(10,4)<<endl;
    cout<<"triangle  (10,11,12) =  "<<area(10,11,12)<<endl;
    return 0;
}
/
