//palindrome 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"enter a no ";
    int n;
    cin>>n;
    int m,rem,sum=0;
    m=n;
    while(n!=0)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
    if(m==sum)
        cout<<" palindrome\n";
    else
         cout<<" NOT palindrome\n";
    return 0;
}
