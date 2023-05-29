#include<iostream>
using namespace std;
class sample
{
    int n1,n2;
    public:
        void getdata(int x,int y)
        {
            n1=x;
            n2=y;
        }
        void display();
};
void sample::display()
{
    cout<<"n1 = "<<n1;
    cout<<"\nn2 = "<<n2;
    cout<<"\n";
}
/*
int main()
{
    sample s1;
    s1.getdata(10,20);
    s1.display();
    return 0;
}*/
int main()
{
    sample s1;
    cout<<"enter 2 int ";
    int n1,n2;
    cin>>n1>>n2;
    s1.getdata(n1,n2);
    s1.display();
    return 0;
}
