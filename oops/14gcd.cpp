//gcd
#include<iostream>
using namespace std;

int main()
{
    cout<<"enter 2 nos ";
    int m,n;
    cin>>m>>n;
    while(n>0)
    {
        int rem=m%n;
        m=n;
        n=rem;
    }
    cout<<"GCD = "<<m;
    cout<<"\n";
    return 0;
}
/*
#include<stdio.h>
void main(){
int m,n,t1,t2,rem,lcm,gcd;
printf("enter 2 nos\n");
scanf("%d%d",&m,&n);
t1=m;
t2=n;
 while(n>0){
  rem=m%n;
  m=n;
  n=rem;
 }
gcd=m;
lcm=t1*t2/gcd;
printf("GCD of %d and %d is %d",t1,t2,gcd);
printf("\nLCM of %d and %d is %d\n",t1,t2,lcm);
} 
*/
