#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0,count=0;
    for(int i=1;i<=n/2;i++)
        for(int j=1;j<n/2;j++)
        {
            sum=(i*i)+(j*j*j);
            if(sum<=n)count++;
        }
    cout<<count<<"\n";
    return 0;
}

/*
count perfect sums

perfect sum is sum of square and cube, eg 9=1^2 + 2^3 and 5 = 1^3+2^2
for given n, find count of such elements

for 5 is 2 (2 =1^2+1^3 and 5)
for 10 is 4 (2,5,9=1+8,10=1+9)
*/


/*
#include <iostream>
#include <math.h>
using namespace std;
bool issquare(int num)
{
    int root=sqrt(num);
    return (root*root)==num;
}
bool iscube(int num)
{
    int root=cbrt(num);
    return (root*root*root)==num;
}
int countsc(int N)
{
    int count=0;
    for(int i=1;i<=N;i++)
    {
        if(issquare(i))
        count++;
        else if(iscube(i))
        count++;
    }
    return count;
}
int main()
{
    int N=20;
    cout<<countsc(N);
    return 0;
}
*/
