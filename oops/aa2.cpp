/*with an example program explain exception in constructor and distructor */
#include<iostream>
using namespace std;
class test
{
    public:
    test()
    {
        cout<<"Constructor\n";
    }
    ~test()
    {
        cout<<"Destructor\n";
    }
};
int main()
{
    try
    {
        test t;
        throw t;
        
   }
   catch(int i)
   {
    cout<<"caught "<<i<<"\n";
   }
}
