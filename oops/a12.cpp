#include<iostream>
#include<iomanip>
using namespace std;
int n;
class flower
{       
    char name[20],colour[20];
    int price;
    public:
        void ged()
        {
            cout<<"Enter flower name,colour,price\n";
            cin>>name>>colour>>price;
        }
        friend void disp(flower f[10],int);
        friend void sdisp(flower f[10],int);
};
void disp(flower f[10],int n)
{
    for(int i=0;i<n;i++)
        cout<<setw(10)<<f[i].name<<setw(10)<<f[i].colour<<setw(7)<<f[i].price<<endl;
}
void sdisp(flower f[10],int n)
{
    for(int i=0;i<n;i++)
        if(f[i].price>50)
            cout<<setw(10)<<f[i].name<<setw(7)<<f[i].price<<endl;
}
int main()
{
    cout<<"enter n ";
    int n;
    cin>>n;
    flower f[n];
    cout<<"\nenter details ";
    for(int i=0;i<n;i++)
        f[i].ged();
    disp(f,n);
    cout<<"\nflower price > 50\n";
    sdisp(f,n);
    return 0;
}
