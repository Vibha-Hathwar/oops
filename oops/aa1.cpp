/*Develop a template class to sort given data of integer and double using merge technique*/
#include<iostream>
#include<vector>
using namespace std;
template<class t>
void merge(t  a[],int p,int q)
{
    int x,y,z,mid;
    vector<t>temp(q-p+1);
    mid=(p+q)/2;
    z=0;
    x=p;y=mid+1;
    while(x<=mid&&y<=q)
    {
        if(a[x]<a[y])
        {
            temp[z]=a[x];
            ++x;++z;
        }
        else
        {
            temp[z]=a[y];
            ++y;++z;
        }
    }
    while(y<=q)
    {
        temp[z]=a[y];
        ++y;++z;
    }
    for(int i=p;i<=q;i++)
        a[i]=temp[i-p];
}
template<class t>
void mergesort(t a[],int p,int q)
{
    if(p<q)
    {
       int  mid=(p+q)/2;
       mergesort(a,p,mid);
       mergesort(a,mid+1,q); 
    }
}
template<class t>
void printa(t a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
    cout<<"\n";
}    
    
int main()
{
    cout<<"enter n1 value ";
    int n1;cin>>n;
    cout<<"enter array 1 elements ";
    t a[n1];
    for(int i=0;i<n1;i++)
        cin>>a[i];
    mergesort(a,0,n1-1);
    cout<<"enter n2 value ";
    it n2;cin>>n2;
    cout<<"enter array2 elements ";
    t b[n2];
    for(int i=0;i<n;i++)
        cin>>b[i];
    mergesort(b,0,n2-1);
    cout<<"array1 after sorting ";
    printa(a,n1);
    mergesort(a,0,n-1);
    cout<<"array2 after sorting ";
    printa(b,n2);
    return 0;
}
