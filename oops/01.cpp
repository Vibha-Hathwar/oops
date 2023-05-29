                                          //gedit prgm_name.cpp
                                          //g++ prgm_name.cpp
                                          //./a.out


//linear search
#include<iostream>
using namespace std;

int main()
{
    int n,i,key,j=0;
    cout << "Enter n : ";
    cin >> n;
    int a[n];
    cout << "Enter elements : ";
    for(i=0;i<n;i++)
        cin >> a[i];
    cout << "Enter key : ";
    cin >> key;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            j=1;
            break; 
        }
    }
    if(j==1)
    {
        cout << "Element found at position "<<i+1;
        cout <<"\n";
    }   
    else
        cout << key << " NOT found\n";
}
