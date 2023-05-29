/*
#include<iostream>
using namespace std;
                                   //sumof 2 nos                  
int sum(int a,int b)
{                                 //with argument without return value
    return a+b;
}
int main()
{
    cout<<"enter 2 int ";
    int a,b;
    cin>>a>>b;
    cout<<"Sum = "<<sum(a,b)<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
                                      //sum of 2 nos
void sum(int a,int b)
{                                     //without return value
   cout<<"Sum = "<<a+b<<endl;
}
int main()
{
    cout<<"enter 2 int ";
    int a,b;
    cin>>a>>b;
    sum(a,b);
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
                                   //sumof 2 nos
inline int sum(int a,int b)
{                                 //in line function
    return a+b;
}
int main()
{
    cout<<"enter 2 int ";
    int a,b;
    cin>>a>>b;
    cout<<"Sum = "<<sum(a,b)<<endl;
    return 0;
}
*/

/* ********************************************************* */

/*
#include<iostream>
using namespace std;
                                       //default argument
int sum(int a,int b,int  c=10)          
{                                      
    return a+b+c;
}
int main()
{   
    cout<<"c = "<<10<<endl;
    cout<<"sum(1,2) = "<<sum(1,2)<<endl;
    cout<<"sum(1,2,3) = "<<sum(1,2,3)<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
                                     //default arguments
int sum(int a=1,int b=2,int c=3)
{
    return a+b+c;
}
int main()
{   
    cout<<"a = "<<1<<endl;
    cout<<"b = "<<2<<endl;
    cout<<"c = "<<3<<endl;
    cout<<"sum() = "<<sum()<<endl;
    cout<<"sum(7) = "<<sum(7)<<endl;
    cout<<"sum(7,8) = "<<sum(7,8)<<endl;
    cout<<"sum(6,7,8) = "<<sum(6,7,8)<<endl;
    return 0;
}
*/
#include<iostream>
using namespace std;
int sum(const int a)
{
    int b=a+10;
    return b;
}
/*int sum(const int a)
{                             //error
    a=a+10;                   //cannot change value of constant
    return a;
}*/

int main()
{
    cout<<"enter an int  ";
    int b;
    cin>>b;
    cout<<b<<"+10 = "<<sum(b)<<endl;
    return 0;
}



