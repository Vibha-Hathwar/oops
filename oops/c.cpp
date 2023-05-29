#include <iostream>
#include <fstream>

using namespace std;

class shopping
{

private:
    int pcode;
    float price;
    float dis;
    string pname;
public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void rem();
    void list();
    void edit();
    void receipt();
};

void shopping::menu()
{
    m:
    int choice;
    string email;
    string password;
    cout<<"\t\t\t\t___________________________________\n";
    cout<<"\t\t\t\t                                   \n";
    cout<<"\t\t\t\t     Supermarket Main Menu         \n";
    cout<<"\t\t\t\t___________________________________\n";
    cout<<"\t\t\t\t                                   \n";
    cout<<"\t\t\t\t|  1)  Administrator     |\n";
    cout<<"\t\t\t\t|                        |\n";
    cout<<"\t\t\t\t|  2)  Buyer             |\n";
    cout<<"\t\t\t\t|                        |\n";
    cout<<"\t\t\t\t|  3)  Exit              |\n";
    cout<<"\t\t\t\t|                        |\n";
    cout<<"\n\t\t\t Please select : ";
    cin>>choice;
    switch(choice)
    {
        case 1:cout<<"\n\t\t\t Please Login\n";
               cout<<"\t\t Enter Email : ";
               cin>>email;
               cout<<"\t\t Password : ";
               cin>>password;
               if(email=="oops@email.com"&&password=="v2")
                    administrator();
               else
                    cout<<"Invalid email/password";
               break;
        case 2:buyer();
        case 3:exit(0);
        default:cout<<"\n\t\tSelect from given options\n";
     }
goto m;
}

void shopping::administrator()
{
    m:
    int choice;
    cout<<"\n\n\n\t\t\t Administrator menu\n";
    cout<<"\n\t\t\t|       1) Add the product           |";
    cout<<"\n\t\t\t|                                    |";
    cout<<"\n\t\t\t|       2) Modify the product        |";
    cout<<"\n\t\t\t|                                    |";
    cout<<"\n\t\t\t|       3) Delete the product        |";
    cout<<"\n\t\t\t|                                    |";
    cout<<"\n\t\t\t|       4) Back to main menu         |";
    cout<<"\n\n\t\t Enter your choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:add();
               break;
        case 2:edit();
               break;
        case 3:rem();
               break;
        case 4:menu();
               break;
        default:cout<<"\n\t\tInvalid choice !\n";
     }
     goto m;
}

void shopping::buyer()
{
    m:
    int choice;
    cout<<"\t\t\t Buyer  \n";
    cout<<"\t\t\t__\n";
    cout<<"                    \n";
    cout<<"\t\t\t 1)Buy product\n";
    cout<<"                    \n";
    cout<<"\t\t\t 2)Go back    \n";
    cout<<"Enter your choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:receipt();
               break;
        case 2:menu();
        default:cout<<"Invalid choice";
    }
    goto m;

}
void shopping::add()
{
    m:
    fstream data;
    int c;
    int token=0;
    float p;
    float d;
    string n;
    cout<<"\n\n\t\t Add new product ";
    cout<<"\n\n\t Product code of the product : ";
    cin>>pcode;
    cout<<"\n\t Name of the product : ";
    cin>>pname;
    cout<<"\n\t Price of the product : ";
    cin>>price;
    cout<<"\n\t Discount on product : ";
    cin>>dis;

    data.open("database.txt",ios::in);
    if(!data)
    {
        data.open("database.txt",ios::app|ios::out);
        data<<" "<<pcode<<" "<<pname<<" "<<dis<<"\n";
        data.close();
    }
    else
    {
        data>>c>>n>>p>>d;
        while(!data.eof())
        {
            if(c==pcode)
            {
                token++;
            }
            data>>c>>n>>p>>d;
        }
        data.close();
    }
    if(token==1)
        goto m;
    else
    {
        data.open("database.txt",ios::app|ios::out);
        data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
        data.close();
    }
  cout<<"\n\t\t Record inserted !";
};

void shopping::edit()
{
      fstream data,data1;
      int pkey;
      int token=0;
      int c;
      float p;
      float d;
      string n;
      cout<<"\n\t\t\t Modify the record";
      cout<<"\n\t\t\t Product code:";
      cin>>pkey;
      data.open("database.txt",ios::in);
      if(!data)
      {
          cout<<"\n\n File doesn't exit!";
      }
      else
        {
            data1.open("database1.txt",ios::app|ios::out);
            data>>pcode>>pname>>price>>dis;
            while(!data.eof())
            {
                if(pkey==pcode)
                {
                    cout<<"\n\t\t Product new code : ";
                    cin>>c;
                    cout<<"\n\t\t Name of Product : ";
                    cin>>n;
                    cout<<"\n\t\t Price : ";
                    cin>>p;
                    cout<<"\n\t\t Discount : ";
                    cin>>d;
                    data1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
                    cout<<"\n\t\t Record edited ";
                    token++;
                }
                else
                {


                    data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
                    data>>pcode>>pname>>price>>dis;
                }
            }
            data.close();
            data1.close();

            remove("database.txt");
            rename("database1.txt","database.txt");

            if(token==0)
                cout<<"\n\n Record not found sorry!\n";
    }
}
void shopping::rem()
{
    fstream data,data1;
    int pkey,token=0;
    cout<<"\n\n\t Delete product";
    cout<<"\n\n\t Product code : ";
    cin>>pkey;
    data.open("database.txt",ios::in);
    if(!data) //if(data==0)
        cout<<"\nFile doesnot exist\n";
    else
    {
        data1.open("database1.txt",ios::app|ios::out);
        data>>pcode>>pname>>price>>dis;
        while(!data.eof())
        {
            if(pcode==pkey)
            {
                cout<<"\n\n\t Product deleted successfully\n";
                token++;
            }
            else
                data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
            data>>pcode>>pname>>price>>dis;
        }
        data.close();
        data1.close();

        remove("database.txt");
        rename("database1.txt","database.txt");

        if(token==0)
        cout<<"\n\n Record not found sorry!\n";
    }
}
void shopping::list()
{
    fstream data;
    data.open("database.txt",ios::in);
    cout<<"\n\n______________________________\n";
    cout<<"ProNo\t\tName\t\tPrice\n";
    cout<<"\n\n______________________________\n";
    data>>pcode>>pname>>price>>dis;
    while(!data.eof())
    {
        data<<pcode<<"\t\t"<<pname<<"\t\t"<<price<<"\n";
        data>>pcode>>pname>>price>>dis;
    }
    data.close();
}

void shopping::receipt()
{
    fstream data;
    int arrc[100],arrq[100],c=0;
    char choice;
    float amount=0,dis=0,total=0;
    cout<<"\n\n\t\t RECEIPT\t\t\n";
    data.open("database.txt",ios::in);
    if(!data)
        cout<<"\n\n\t\tEmpty database\n";
    else
    {
        data.close();
        list();
        cout<<"\n\n________________________________________\n";
        cout<<"\n          Please place the order          \n";
        cout<<"\n\n________________________________________\n";
        do
        {
            m:
            cout<<"\n\t\tEnter product code : ";
            cin>>arrc[c];
            cout<<"\n\t\tEnter product quantity : ";
            cin>>arrq[c];
            for(int i=0;i<c;i++)
            {
                if(arrc[c]==arrc[i])
                {
                    cout<<"\n\t\tDuplicate product code. Plaese try again !\n";
                    goto m;
                }
            }
            c++;
            cout<<"\n\n\t\tDo you want to buy another product ?\n\t\tIf yes enter y else no\n";
            cin>>choice;
        }
        while(choice=='y');
        cout<<"\n\n_________________________________________________n";
        cout<<"\n\n\t\t RECEIPT\t\t\n";
        cout<<"\n\n_____________________________________________\n";
        cout<<"\nProduct no\tPro name\tpro quantity\tprice\tAmount\tAmount after discount\n";
        for(int i=0;i<c;i++)
        {
            data.open("database.txt",ios::in);
            while(!data.eof())
            {
                if(pcode==arrc[i])
                {
                    amount=price*arrq[i];
                    dis=amount-(amount*dis/100);
                    total=total+dis;
                    cout<<"\n"<<pcode<<"\t\t"<<pname<<"\t\t"<<arrq[i]<<"\t\t"<<price<<"\t\t"<<amount<<"\t\t"<<dis;
                }
                data>>pcode>>pname>>price>>dis;
            }
        }
        data.close();
    }
    cout<<"\n\n___________________________________\n";
    cout<<"\n\t\tTotal amount :"<<total<<"\n";
}
int main()
{
    shopping s;
    s.menu();
}
