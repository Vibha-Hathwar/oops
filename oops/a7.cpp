#include<iostream>
#include<iomanip>
using namespace std;

class tim
{
    int h,m,s,t;
    public:
        void ged();
        void con();
        void disp();
};
void tim::ged()
{
    cout<<"enter time\n";
    cout<<"hr ";cin>>h;
    cout<<"min ";cin>>m;
    cout<<"sec ";cin>>s;
}
void tim::con()
{
    t=(h*3600)+(m*60)+s;
}
void tim::disp()
{
    cout<<"time = "<<h<<" : "<<m<<" : "<<s<<endl;
    cout<<"time in sec = "<<t<<endl;
}
int main()
{
    tim t;
    t.ged();
    t.con();
    t.disp();
    return 0;
}
