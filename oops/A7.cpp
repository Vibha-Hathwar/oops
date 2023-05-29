/*Start with the publication, book, and tape classes of Exercise 1. Add a base class sale that holds an array of three floats so that it can record the dollar sales of a particular publication for the last three months. Include a getdata() function to get three sales amounts from the user, and a putdata() function to display the sales figures. Alter the book and tape classes so they are derived from both publication and sales. An object of class book or tape should input and output sales data along with its other data. Write a main() function to create a book object and a tape object and exercise their input/output capabilities. */

//Code:-




  
  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
/*                                 /////  EERRRROORR //// 
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
class book :public publication,public sales
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
class tape :public publication,public sales
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
void main(void)
{
 book b;
 tape t;
 b.getdata();
 t.getdata();
 b.putdata();
 t.putdata();
 _getch();
}
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
7. Start with the publication, book, and tape classes of Exercise 1. Add a base
class sale that holds an array of three floats so that it can record the dollar
sales of a particular publication for the last three months. Include a getdata()
function to get three sales amounts from the user, and a putdata() function to
display the sales figures. Alter the book and tape classes so they are derived from
both publication and sales. An object of class book or tape should input and output
sales data along with its other data. Write a main() function to create a book
object and a tape object and exercise their input/output capabilities.
*/

#include <iostream>
using namespace std;
class Publication 
{
    string title;
    float price;
    public:
    void getdata()
    {
        cout << "Enter publication title: ";
        cin >> title;
        cout << "Enter publication price: ";
        cin >> price;
    }
    void putdata()
    {
        cout << "Publication title: " << title << endl;
        cout << "Publication price: " << price << endl;
    }
};
class Sale
{
    float sales[3];
    public:
    void getdata(void)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter month " << i + 1 << " sale: $";
            cin >> sales[i];
        }
    }
    void putdata(void)
    {
        for (int i = 0; i < 3; i++) {
            cout << "Month " << i + 1 << " sale: $" << sales[i] << endl;}
    }
};
class Book : public Publication, public Sale
{
    int pageCount;
    public:
    void getdata()
    {
        Publication::getdata();
        Sale::getdata();
        cout << "Enter book page count: ";
        cin >> pageCount;
    }
    void putdata()
    {
        Publication::putdata();
        Sale::putdata();
        cout << "Book page count: " << pageCount << endl;
    }
};
class Tape : public Publication, public Sale
{
    float playingTime;
    public:
    void getdata()
    {
        Publication::getdata();
        Sale::getdata();
        cout << "Enter tape playing time: ";
        cin >> playingTime;
    }
    void putdata()
    {
        Publication::putdata();
        Sale::putdata();
        cout << "Tape playing time: " << playingTime << endl;
    }
};
int main()
{
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
return 0;}
//*/
