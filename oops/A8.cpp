/*Assume that the publisher in Exercises 1 and 3 decides to add a third way to distribute books: on computer disk, for those who like to do their reading on their laptop. Add a disk class that, like book and tape, is derived from publication. The disk class should incorporate the same member functions as the other classes. The data item unique to this class is the disk type: either CD or DVD. You can use an enum type to store this item. The user could select the appropriate type by typing c or d.*/ 

//Program source code:
  /*                                       // FULL RUN AGALLA
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
class publication
{
private:
 string title;
 float price;
public:
 void getdata(void)
 {
  string t;
  float p;
  cout << "Enter title of publication: ";
  cin >> t;
  cout << "Enter price of publication: ";
  cin >> p;
  title = t;
  price = p;
 }

 void putdata(void)
 {
  cout << "Publication title: " << title << endl;
  cout << "Publication price: " << price << endl;
 }
};

class sales
{
private:
 float s1, s2, s3;
public:
 void getdata(void)
 {
  cout << "Enter month 1 sale: $";
  cin >> s1;
  cout << "Enter month 2 sale: $";
  cin >> s2;
  cout << "Enter month 3 sale: $";
  cin >> s3;
 }
 void putdata(void)
 {
  cout << "Month 1 sale: $" << s1 << endl;
  cout << "Month 2 sale: $" << s2 << endl;
  cout << "Month 3 sale: $" << s3 << endl;
 }
};
class book :public publication, public sales
{
private:
 int pagecount;
public:
 void getdata(void)
 {
  publication::getdata();
  sales::getdata();
  cout << "Enter Book Page Count: ";
  cin >> pagecount;
 }
 void putdata(void)
 {
  publication::putdata();
  sales::putdata();
  cout << "Book page count: " << pagecount << endl;
 }
};

class tape :public publication, public sales
{
private:
  float ptime;
public:
 void getdata(void)
 {
  publication::getdata();
  sales::getdata();
  cout << "Enter tap's playing time: ";
  cin >> ptime;
 }

 void putdata(void)
 {
  publication::putdata();
  sales::putdata();
  cout << "Tap's playing time: " << ptime << endl;
 }
};

class disk :public publication
{
private:
 enum dtype
 {CD,DVD};
 dtype userchoice;
public:
 void getdata(void)
 {
  char a;
  publication::getdata();
  cout << "Enter disk type (c or d) for CD and DVD: ";
  cin >> a;
  if (a == 'c')
  userchoice = CD;
  else
  userchoice = DVD;
 }

 void putdata()
 {
  publication::putdata();
  cout << "Disk type is: ";
  if (userchoice == CD)
  cout << "CD";
  else
  cout << "DVD";
  cout<<"\n";
 }
};

int main(void)
{
 disk d;
 d.getdata();
 d.putdata();
 _getch();
}
*/
/*
8. Assume that the publisher in Exercises 6 and 7 decides to add a third way to
distribute books: on computer disk, for those who like to do their reading on their
laptop. Add a disk class that, like book and tape, is derived from publication. The
disk class should incorporate the same member functions as the other classes. The
data item unique to this class is the disk type: either CD or DVD. You can use an
enum type to store this item. The user could select the appropriate type by typing
c or d.
*/
#include <iostream>
using namespace std;
class Publication
{
    string title;
    float price;
    public:
    void getdata() {
        cout << "Enter publication title: ";
        cin >> title;
        cout << "Enter publication price: ";
        cin >> price;
    }
    void putdata() {
        cout << "Publication title: " << title << endl;
        cout << "Publication price: " << price << endl;
    }
};
enum diskType { cd, dvd };
class Disk : public Publication {
    diskType type;
    public:
    void getdata() {
        char choice;
        Publication::getdata();
        cout << "Enter disk type (c or d) for CD and DVD: ";
        cin >> choice;
        type = choice == 'c' ? cd : dvd;
        }
    void putdata() {
        Publication::putdata();
        switch(type) {
            case cd:
                cout << "Disk type: CD" << endl; break;
            case dvd:
                cout << "Disk type: DVD" << endl; break;
        }
    }
};
int main()
{
    Disk d;
    cout << "Enter disk details: " << endl;
    d.getdata();
    cout << endl;
    cout << "Disk details: " << endl;
    d.putdata();
    return 0;
}
//*/
