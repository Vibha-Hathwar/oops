//string alli iro ella elements du next char agbeku, z idre a
#include<iostream>
#include<string>
using namespace std;
string change(string str)
{
    string res="";
    for(int i=0;str[i]!='\0';i++)
    {
        char c=str[i];
        if(c=='z')c='a';
        else c=c+1;
        res=res+c;
    }
    return res;
}
int main()
{
    string s;
    cin>>s;
    cout<<change(s)<<"\n";
    return 0;
}
