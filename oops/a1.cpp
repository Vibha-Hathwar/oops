#include<iostream>
#include<cmath>
using namespace std;
int a;
float com(int a)
{
   return sqrt(a);
}
float com(float a)
{
   return sqrt(a);
}
double com(double a)
{
   return sqrt(a);
}

int main()
{
    cout<<"sqrt(2) = "<<com(2)<<endl;
    cout<<"sqrt(2.5) = "<<com(2.5)<<endl;
    cout<<"sqrt(10.923455) = "<<com(10.923455)<<endl;
    return 0;
}
