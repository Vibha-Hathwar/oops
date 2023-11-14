#include <iostream>
#include <vector>
using namespace std;

bool follow_pattern(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;
    int diff = s2[0] - s1[0];
    for (int i = 1; i < s1.length(); i++)
        if (s2[i] - s1[i] != diff)
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    string oddstring;
    for (int i = 0; i < n; i++)
    {
        bool isodd = true;
        for (int j = 0; j < n; j++)
            if (i != j && follow_pattern(s[i], s[j]))
            {
                isodd = false;
                break;
            }
        if (isodd)
        {
            oddstring = s[i];
            break;
        }
    }
    cout << endl << oddstring << endl;
    return 0;
}
