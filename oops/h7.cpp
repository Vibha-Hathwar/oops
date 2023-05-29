//  ADA
//  divisible sum pairs
#include<iostream>
using namespace std;
int main()              //logical
{                       //  ERRRROOOOOOORRRRRR
    int n,k;
    scanf("%d%d",&n,&k);
    int ar[n],i,j,count=0;
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(ar[i]+ar[j]%k==0)
                count++;
    printf("%d\n",count);
    return 0;
}
