//LOST MATRIX

/*
input
no of rows
no of columns
m lines of space seperated n numbers 
no of queries
queries

output
position

traverse matrix diagonally to form an array
print the first occurance of queries in array, NOTE use 1-based array, else print -1

/*
nande input:
3
4
1  2  3  4
11 22 3  4
6  7  8  9
3
13 6 3

output:
-1
4
6

*/
#include <bits/stdc++.h>
int arr[100][100],a[1000000],R,C;
using namespace std;

bool isValid(int i, int j)
{
	if (i < 0 || i >= R|| j >= C || j < 0)
		return false;
	return true;
}

void diagonalOrder(int arr[100][100])
{
    int x=0;
	for (int k = 0; k < R; k++)
	{
		a[x]=arr[k][0];
		x++;
		int i = k - 1;
		int j = 1;
	    while (isValid(i, j))
	    {
			a[x]=arr[i][j];
			x++;
			i--;
			j++;
		}
	}
    for (int k = 1; k < C; k++)
	{
		a[x]= arr[R - 1][k];
		x++;
		int i = R - 2;
		int j = k + 1;
    	while (isValid(i, j))
		{
			a[x]=arr[i][j];
			x++;
			i--;
			j++;
		}
	}
}
int find(int a[],int k)
{
    for (int i = 0; i < R*C; i++)
        if (a[i] == k)
            return i;
    return -2;
}
int main()
{
    cin>>R;
    cin>>C;
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            cin>>arr[i][j];
	diagonalOrder(arr);
	/*for(int i=0;i<(R*C);i++)
	    cout<<a[i]<<" ";
	cout<<"\n";*/
	int q;
	cin>>q;
	int p[q],res[q];
    for(int i=0;i<q;i++)
        res[i]=-1;
	for(int i=0;i<q;i++)
	    cin>>p[i];
	/*for(int i=0;i<q;i++)
	{
	    for(int j=0;j<(R*C);j++)
	        if(p[i]==a[j])
	            res[i]=j+1;
	   // first occurance alla
	   // illa andre print agalla

	}*/
	for(int i=0;i<q;i++)
	    res[i]=find(a,p[i]) + 1;
	for(int i=0;i<q;i++)
	    cout<<res[i]<<"\n";
	return 0;
}
