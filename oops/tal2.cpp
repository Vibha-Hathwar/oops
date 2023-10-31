//get max product
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int calculateValue(const string &str)
{
    int value = 0;
    for (char c : str)
        if (isdigit(c))
            value = value * 10 + (c - '0');
    if (value == 0)
        value = str.length();
    return value;
}
int main()
{
    int n;
    cin >> n;    
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    long long maxProduct = 1;
    for (int i = 0; i < n; i++)
        {
            int value1 = calculateValue(arr[i]);
            maxProduct = maxProduct* value1;
        }
    cout << maxProduct << endl;
    return 0;
}

