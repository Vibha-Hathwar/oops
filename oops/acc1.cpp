#include<iostream>
using namespace std;
int main()
{
    int m,n,x,sum=0;
    int a[10],b[10];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>m;
    for(int i=0;i<m;i++) cin>>b[i];
    cin>>x;
    for(int i=0;i<m;i++)
    {
        int flag=0;
        for(int j=0;j<n;j++)
            if(b[i]==a[j])
            {
                sum+=(b[i]*x);
                a[j]=0;
                flag=1;
                break;
            }
        if(flag==0)sum-=(b[i]*x);
   }
   cout<<sum<<"\n";
}


/*
input
n
a[n]
m
b[m]
x

for every x of b in a, x*p you score, for every x not in a you loose x*p. find total you get fter trversing m elements
*/
