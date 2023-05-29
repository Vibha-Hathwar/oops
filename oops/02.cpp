//sum of n nos
#include<iostream>
using namespace std;

int main()
{
    int n,i,sum=0;
    cout << "Enter n : ";
    cin >> n;
    int a[n];
    cout << "Enter elements : ";
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        sum=sum+a[i];
    }
    cout<<"sum = "<<sum;
    cout<<"\n";
} 
