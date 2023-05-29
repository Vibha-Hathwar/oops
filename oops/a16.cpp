#include<iostream>
using namespace std;
inline float mul(float x,float y)
{
    return x*y;
}
int main()
{
    float a,b;
    cout<<"enter 2 nos ";
    cin>>a>>b;
    cout<<"product = "<<mul(a,b)<<endl;
    return 0;
}
