/*
Derive a class called employee2 from the employee class in the EMPLOY program in this chapter. This new class should add a type double data item called compensation, and also an enum type called period to indicate whether the employee is paid hourly, weekly, or monthly. For simplicity you can change the manager, scientist, and laborer classes so they are derived from employee2 instead of employee. However, note that in many circumstances it might be more in the spirit of OOP to create a separate base class called compensation and three new classes manager2, scientist2, and laborer2, and use multiple inheritance to derive these three classes from the original manager, scientist, and laborer classes and from compensation. This way none of the original classes needs to be modified.*/

//Code:-
/*#include <iostream>
using namespace std;
const int LEN = 80; //maximum length of names
class employee //employee class
{
private:
char name[LEN]; //employee name
unsigned long number; //employee number
public:
void getdata()
{
cout << "\n Enter last name: "; cin >> name;
cout << " Enter number: "; cin >> number;
}
void putdata() const
{
cout << "\n \n \nName: " << name;
cout << "\n Number:" << number;
}
};
////////////////////////////////////////////////////////////////;
class manager : public employee //management class
{
private:
char title[LEN]; //”vice-president” etc.
double dues; //golf club dues
public:
void getdata()
{
employee::getdata();
cout << "\n Enter title: "; cin >> title;
cout << " Enter golf club dues: "; cin >> dues;
}
void putdata() const
{
employee::putdata();
cout << "\n Title: "<< title;
cout << "\n Golf club dues: "<< dues;
}
};
////////////////////////////////////////////////////////////////
class scientist : public employee //scientist class
{
private:
int pubs; //number of publications
public:
void getdata()
{
employee::getdata();
cout << "Enter number of pubs: "; cin >> pubs;
}
void putdata() const
{
employee::putdata();
cout << "\n Number of publications: "<< pubs;
}
};
////////////////////////////////////////////////////////////////
class laborer : public employee //laborer class
{
};
////////////////////////////////////////////////////////////////
int main()
{
manager m1, m2;
scientist s1;
laborer l1;
cout << endl; //get data for several employees
cout << "\nEnter data for manager 1";
m1.getdata();
cout << "\nEnter data for manager 2";
m2.getdata();
cout << "\nEnter data for scientist 1";
s1.getdata();
cout << "\nEnter data for laborer 1";
l1.getdata();
//display data for several employees
cout << "\nData on manager 1";
m1.putdata();
cout << "\nData on manager 2";
m2.putdata();
cout << "\nData on scientist 1";
s1.putdata();
cout << "\nData on laborer 1";
l1.putdata();
cout << endl;
return 0;
}
*/
///////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <math.h>
using namespace std;
class Employee
{
    string name;
    unsigned long ID;
    public:
    void getdata() {
        cout << "Enter employee name: "; cin >> name;
        cout << "Enter employee ID: "; cin >> ID;
    }
    void putdata() {
        cout << "Employee name: " << name << endl;
        cout << "Employee ID: " << ID << endl;
    }
};
enum Paytype { hourly, weekly, monthly };
class Employee2 : public Employee
{
    double compensation;
    Paytype period;
    public:
    void getdata()
    {
        Employee::getdata();
        cout << "Enter employee compensation: $"; cin >> compensation;
        char choice;
        cout << "Enter employee pay type: "; cin >> choice;
        if (choice == 'h') {
            period = hourly;
        } else if (choice == 'w') {
            period = weekly;
        } else {
            period = monthly;
        }
    }
    void putdata() 
    {
        Employee::putdata();
        cout << "Employee compensation: $" << compensation << endl;
        cout << "Employee pay type: ";
        switch (period)
        {
            case hourly: cout << "hourly\n"; break;
            case weekly: cout << "weekly\n"; break;
            case monthly: cout << "monthly\n"; break;
         }
    }
};
class Manager : public Employee2
{
    string title;
    public:
    void getdata()
    {
        Employee2::getdata();
        cout << "Enter manager title: ";
        cin >> title;
    }
    void putdata()
    {
        Employee2::putdata();
        cout << "Manager title: " << title << endl;
    }
};
class Scientist : public Employee2
{
    int nPublications;
    public:
    void getdata()
    {
        Employee2::getdata();
        cout << "Enter scientist number of publications: ";
        cin >> nPublications;
    }
    void putdata()
    {
        Employee2::putdata();
        cout << "Scientist number of publications: " << nPublications << endl;
    }
};
class Laborer : public Employee2
{
    int nHours;
    public:
    void getdata()
    {
        Employee2::getdata();
        cout << "Enter laborer number of working hours: ";
        cin >> nHours;
    }
    void putdata() 
    {
        Employee2::putdata();
        cout << "Laborer number of working hours: " << nHours << endl;
    }
};
int main()
{
    Manager m;
    cout << "Enter details of a manager: " << endl;
    m.getdata();
    Scientist s;
    cout << endl << "Enter details of a scientist: " << endl;
    s.getdata();
    Laborer l;
    cout << endl << "Enter details of a laborer: " << endl;
    l.getdata();
    cout<<"\n\nDisplay details\n\n";
    cout << endl << "Manager details: " << endl;
    m.putdata();
    cout << endl << "Scientist details: " << endl;
    s.putdata();
    cout << endl << "Laborer details: " << endl;
    l.putdata();
    return 0;
}
//*/
