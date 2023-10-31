#include<iostream>
using namespace std;
int fact(int n,int k)
{
    int count=0;
    while(n!=0)
    {
        if(n%10 ==k)count++;
        n=n/10;
    }
    return count;
}
int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int max=0,res=-1;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(max<fact(arr[i],k))
        {
            max=fact(arr[i],k);
            res=arr[i];
        }
    } 
    cout<<res<<"\n";
    return 0;
}
