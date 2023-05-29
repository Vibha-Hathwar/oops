/*
Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.

Sample Input 0
07:05:45PM

Sample Output 0
19:05:45

*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int hh, mm, ss;
    hh = (s[0] - '0') * 10 + (s[1] - '0');
    mm = (s[3] - '0') * 10 + (s[4] - '0');
    ss = (s[6] - '0') * 10 + (s[7] - '0');
    if (hh < 12 && s[8] == 'P') hh += 12;
    if (hh == 12 && s[8] == 'A') hh = 0;
    printf("%02d:%02d:%02d\n", hh, mm, ss);
    return 0;
}
