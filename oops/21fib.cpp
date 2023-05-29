#include<iostream>
using namespace std;

int fibonacci(int m){
    if(m==1) return 0;
    if(m==2) return 1;
    return fibonacci(m-1)+fibonacci(m-2);
}

int main()
{
    int i,m,n;
    printf("Enter numbers:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter position:");
        scanf("%d",&m);
        m=fibonacci(m);
        printf("%d\n",m);
    }
}
