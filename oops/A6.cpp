/*
6. Imagine a publishing company that markets both book and audiocassette versions
of its works. Create a class publication that stores the title (a string) and price
(type float) of a publication. From this class derive two
classes: book, which adds a page count (type int), and tape, which adds a playing
time in minutes (type float). Each of these three classes should have a getdata()
function to get its data from the user at the keyboard, and a putdata() function to
display its data. Write a main() program to test the book and tape classes by
creating instances of them, asking the user to fill in data with getdata(), and
then displaying the data with putdata().
*/

#include <iostream>

using namespace std;

class p
{
   protected:
   char title[25];
   float price;
   public:
   void ged()
   {
     cout<<"\ntittle and price ";
     cin>>title>>price;
   }
   void pud()
   {
     cout<<"title = "<<title<<"\n";
     cout<<"price = "<<price<<"\n";
   }
};
class book:public p
{
  protected :
    int page;
  public:
  void gep()
  {
    cout<<"page count ";
    cin>>page;
  }
  void pup()
  {
    cout<<"page count "<<page<<"\n";
  }
};
class tape:public p
{
   protected:
     float tme;
   public:
    void getm()
    {
       cout<<"playing time";
       cin>>tme;
    }
    void putm()
    {
      cout<<"plying time = "<<tme<<"\n";
    }
};
int main()
{
    tape t;
    t.ged();t.getm();
    t.pud();t.putm();
    book b;
    b.ged();b.gep();
    b.pud();b.pup();
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////

/*
float computeAverage(Raingauge* Rarr, int nCities) {
float total = 0;
for (int i = 0; i < nCities; i++) {
total += Rarr[i].rainfall;
}
return total / nCities;
}
int main() {
int nCities;
cout << "Enter number of cities: ";
cin >> nCities;
cout << endl;
cout << "Enter measurement details of " << nCities << " cities: " << endl;
Raingauge* Rarr = new Raingauge[nCities];
for (int i = 0; i < nCities; i++) {
Rarr[i].fnReadMeasurement();
}
cout << endl << "Measurement details of " << nCities << " cities: " << endl;
for (int i = 0; i < nCities; i++) {
Rarr[i].fnDispReading();
}
cout << endl << "Average rainfall of " << nCities << " cities: " <<
computeAverage(Rarr, nCities);
delete [] Rarr;
return 0;
}
*/

////////////////////////////////////////////////////////////////////////////////
/* 
#include <iostream>
using namespace std;
class Publication {
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
class Book : public Publication {
int pageCount;
public:
void getdata() {
Publication::getdata();
cout << "Enter book page count: ";
cin >> pageCount;
}
void putdata() {
Publication::putdata();
cout << "Book page count: " << pageCount << endl;
}
};
class Tape : public Publication {
float playingTime;
public:
void getdata() {
Publication::getdata();
cout << "Enter tape playing time: ";
cin >> playingTime;
}
void putdata() {
Publication::putdata();
cout << "Tape playing time: " << playingTime << endl;
}
};
int main() {
Book b;
cout << "Enter book details: " << endl;
b.getdata();
cout << endl;
cout << "Book details: " << endl;
b.putdata();
cout << endl;
Tape t;
cout << "Enter tape details: " << endl;
t.getdata();
cout << endl;
cout << "Tape details: " << endl;
t.putdata();
return 0;
}
//*/
