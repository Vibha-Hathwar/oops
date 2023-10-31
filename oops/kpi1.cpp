#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(char c : s)
        if(c>='A' && c<='Z')
        {
            char ct=islower(c);
            cout<<"\n"<<ct;
        }
        else
        {
            char ct=isupper(c);
            cout<<ct;
        }
        return 0;
}
