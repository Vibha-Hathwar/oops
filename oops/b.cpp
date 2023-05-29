

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
            data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
        data>>pcode>>pname>>price>>dis;
    }
    data.close();
    data1.close();

    remove("database.txt");
    rename("database1.txt","database.txt");

    if(token==0)
        cout<<"\n\n Record not found sorry!"\n;
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
        cout<<"\n\n Record not found sorry!"\n;
    }
}
void shopping::list()
{
    fstream data;
    data.open("database.txt",ios::in);
    cout<<"\n\n________________________________________\n";
    cout<<"ProNo\t\tName\t\tPrice\n";
    cout<<"\n\n________________________________________\n";
    data>>pcode>>pname>>price>>dis;
    while(!data.eof())
    {
        data1<<pcode<<"\t\t"<<pname<<"\t\t"<<price<<"\n";
        data>>pcode>>pname>>price>>dis;
    }
    data.close();
}

void shopping::reciept
{
    fsteam data;
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
            ci>>arrc[c];
            cout<<"\n\t\tEnter product quantity : ";
            cin>>arrq[c];
            for(int i=0;i<c;i++0)
            {
                if(arr[c]==arrc[i])
                {
                    cout<<"\n\t\tDuplicate product code. Plaese try again !\n";
                    goto m;
                } 
            }
            c++;
            cout<<"\n\n\t\tDo you want to buy another product ?\n\t\tIf yes enter y else no\n";
            cin>>choice;
        }
        while(choice=="y");
        cout<<"\n\n________________________________________\n";
        cout<<"\n\n\t\t RECEIPT\t\t\n";
        cout<<"\n\n________________________________________\n";
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
    cout<<"\n\n________________________________________\n";
    cout<<"\n\t\tTotal amount : "<<total<<"\n";
}
int main()
{
    shopping s;
    s.menu();
}
