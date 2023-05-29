/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.1416
void main(){
int n,deg,i;
float num,den=1,x,sum=0;
printf("enter angle\n");
scanf("%d",&deg);
printf("enter no of terms\n");
scanf("%d",&n);
x=deg*PI/180;
num=x;
 for(i=1;i<=n;i++){
 sum=sum+num/den;
 num=-x*x*num;
 den=den*(i*2)*(i*2+1);
 }
printf("calculated sin %dd=%f\n",deg,sum);
printf("built-in function is sin(%d)=%f\n",deg,sin(x));
}
*/
