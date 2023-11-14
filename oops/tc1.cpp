/*to reach n, in steps of m or 1, how many steps required*/

#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>n;
    cin>>m;
    int x=0,count=0;
    while(x<=n)
    {
        x+=m;
        count++;
    }
    while(x<=n)
    {
        x=x+1;
        count++;
    }
    cout<<count<<"\n";
    return 0;
}
