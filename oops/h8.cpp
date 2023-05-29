//migratory birds
#include<iostream>
using namespace std;

int N,A[10];

int main()
{
    cin >> N;
    for (int i=1,x; i <= N; i++) cin >> x, A[x]++;
    int ans = 1;
    for (int i=2; i <= 5; i++)
        if (A[i] > A[ans]) ans = i;
    cout << ans<<"\n";
}



