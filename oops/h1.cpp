/*For each pair of i and j values (i.e., for each query), print a single integer that denotes the element located at index j of the array referenced by a[i]. There should be a total of q lines of output.

Sample Input
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3

Sample Output
5
9
*/


//e case eun agatte , bered yavdu agalla
	
#include <iostream>
using namespace std;
int main() 
{
    // Enter your code here. Read input from STDIN. Print output to STDOUT 
    int a[10][10];
    int n,q,s,x[10],y[10];
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        for(int j=0;j<s;j++)
            cin>>a[i][j];
    }
    for(int i=0;i<n;i++)
        cin>>x[i]>>y[i];
    cout<<"\n";
    for(int i=0;i<n;i++)
        cout<<a[x[i]][y[i]]<<"\n";
    return 0;
}
