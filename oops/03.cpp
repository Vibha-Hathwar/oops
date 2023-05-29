/*
  A person is eligible to vote if his/her age is greater than 18,definr a function to findout if he/shenis elible to vote
*/
#include<iostream>
using namespace std;

void ele(int age)
{
    if(age>=18)
        cout<<"\telegible\n";
    else
        cout<<"\tNOT eligible\n";
}
int main()
{
    char nam[20];
    int age;
    cout<<"enter name ";
    cin>>nam;
    cout<<"enter age ";
    cin>>age;
    ele(age);
}
