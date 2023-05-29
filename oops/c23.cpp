#include<iostream>
using namespace std;    //distructors
int count =0;
class test
{
    public:
    test()
    {
        count++;
        cout<<"object created no "<<count<<"\n";
    }
    ~test()
    {
        cout<<"object destroyed no  "<<count<<"\n";
        count--;
    }
};
int main()
{
    cout<<"inside main()\n";
    test t1;
    {
        cout<<"\nBlock 1\n";
        test t2,t3;
    }
    cout<<"\nOutside Block\n";
    test t5,t6;
    return 0;
}
