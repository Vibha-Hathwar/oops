#include<iostream>
using namespace std;
void isupper(char c)
{
    if(c<='Z' && c>='A')cout<<"True\n";
    else cout<<"False\n";
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        char c;
        cin>>c;
        isupper(c);
    }
    return 0;
}
