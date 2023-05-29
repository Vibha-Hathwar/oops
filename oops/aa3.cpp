#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a;
    a.push_back(0);
    a.push_back(1);
    try
    {
        a.at(2);
        throw 1;
    }
    catch(int i)
    {
        cout<<"exception "<<i<<" occured";
    }
    return 0;
}
