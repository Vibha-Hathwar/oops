#include<iostream>
#include<cstring>
using namespace std;
class strng
{
    char *str;
    int len;
  public:
    strng();
    strng(char *s);
    void disp();
    void join(strng &a,strng &b);
};
strng::strng()
{
    len=0;
    str=new char[len+1];
}
strng::strng(char *s)
{
    len=strlen(s);
    str=new char[len+1];
    strcpy(str,s);   
}
void strng::disp()
{
    cout<<str<<"\n";
}
void strng::join(strng &a,strng &b)
{
    len=a.len+b.len;
    delete str;
    str=new char[len+1];
    strcpy (str,a.str);
    strcat(str,b.str);
}
int main()
{   
    char *s1="Hello";
    strng s2(s1);
    strng s3("Tumkur");
    strng s4("SIT");
    strng s5,s6;
    s5.join(s2,s3);
    s6.join(s4,s3);
    s2.disp();
    s4.disp();
    s3.disp();
    s6.disp();
    s5.disp();
    return 0;
}
