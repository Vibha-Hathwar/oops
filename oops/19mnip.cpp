#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
    float *a;
    a=new float(10.8);
    cout<<"a = "<<*a;
    cout<<"\n";
 /* float b=18.1;                           //error
    cout<<"b = "<<setw*(7)<<b; */
    cout<<"\n";
 /* int b=2546;
    cout<<"b = "<<b<<endl;                                       //endl |||r to \n
    cout<<"b = "<<setw(7)<<b; 
    cout<<"\n";
    cout<<"\n";  */
    int c=16,d=325,e=4356;
    cout<<"c = "<<setw(5)<<c<<endl;           //addsetra space needed for variable to print 
    cout<<"d = "<<setw(5)<<d<<endl;           //in right justfication fashion
    cout<<"e = "<<setw(5)<<e<<endl;
    cout<<"\n";                              //float displays 6 digits //if exceeds, displayed in expo form
    float f=325.6368;
    cout<<"f = "<<f<<endl;
    cout<<"f = "<<setprecision(3)<<f<<endl;                     //no of digits before decimal pt
    cout<<"f = "<<fixed<<setprecision(2)<<f<<endl;              //no of digits after decimal pt
    return 0;
}
