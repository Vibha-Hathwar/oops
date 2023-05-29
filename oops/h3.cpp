void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    int i;
    int c1=0,c2=0;
    for(i=0;i<apples.size();i++)
        if(s<=a+apples[i] && a+apples[i]<=t)
            c1++;
    for(i=0;i<oranges.size();i++)
        if(s<=b+oranges[i] && b+oranges[i]<=t)
            c2++;
    printf("%d\n%d",c1,c2);
}

/***********************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int s,t,a,b,m,n,x;
    int aa,bb;
    aa = bb = 0;

    scanf("%d%d%d%d%d%d",&s,&t,&a,&b,&m,&n);
    while(m--)
    {
        scanf("%d",&x);
        if(s <= a+x && a+x <= t) aa++;
    }
    while(n--)
    {
        scanf("%d",&x);
        if(s <= b+x && b+x <= t) bb++;
    }
    printf("%d\n%d\n",aa,bb);
    return 0;
}
