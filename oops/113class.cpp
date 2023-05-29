/*
#include<iostream>
using namespace std;
class sample
{
    int a,b;
    public:
        void getd();
        void putd()
        {
            cout<<"a ="<<a<<endl;
            cout<<"b ="<<b<<endl;
        }
};
void sample::getd()
{
    cout<<"Enter value of a and b: ";
    cin>>a>>b;
}
int main()
{
    sample s1,s2,s3;
    s1.getd();
    s1.putd();
    s2.getd();
    s2.putd();
    s3.putd();
    return 0;
}
*/
#include<iostream>
using namespace std;
class sample
{
    int a,b;
    public:
        void getd(int,int);
        void putd()
        {
            cout<<"a ="<<a<<endl;
            cout<<"b ="<<b<<endl;
        }
};
void sample::getd(int x,int y)
{
    a=x;
    b=y;
}
int main()
{
    int a,b;
    sample s1,s2,s3;
    cout<<a,b;
    cin>>a>>b;
    s1.getd(a,b);
    s1.putd();
    return 0;
}

