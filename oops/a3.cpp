#include<iostream>
#include<cmath>
using namespace std;

float area(float r)
{
    return 3.141*r*r;
}
float area(float a,float b)
{
    return a*b;
}
float area(float a,float b,float c)
{
    float s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
    cout<<"circle area(6) = "<<area(6)<<endl;
    cout<<"rectangle area(5,10) = "<<area(5,10)<<endl;
    cout<<"triangle areaa(4,2,6) = "<<area(10,11,12)<<endl;
    return 0;
}
