/*
Write a C++ program that stores the time duration in hh:mm:ss format in a class called Duration having the members’ hh, mm and ss. 
Include the following constructors 
    • zero parameter constructor that sets all data members to zero 
    • three parameter constructor that sets values of hh, mm and ss respectively if the values are valid 
Implement the following methods 
    • getDuration method that reads and validates a time duration 
    • showDuration method that displays the time duration 
    • addDuration method that adds two durations Illustrate the addition of two-time durations. 
* /

//     Approximate code:-
#include<iostream>
#include<iomanip>
using namespace std;
 
class Time
{
    private :
        int hour;
        int minute;
        int second;
    public :
        //constructor with default value 0
        Time(int h = 0, int m  = 0, int s = 0);
        //setter function 
        void setTime(int h, int m, int s);
        //print description of object in hh:mm:ss
        void print();
        //compare two time object
        bool equals(Time);
};
 
Time :: Time(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}
 
void Time :: setTime(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;     
}        
 
void Time :: print()
{
    cout << setw(2) << setfill('0') << hour << ":"
        << setw(2) << setfill('0') << minute << ":"
         << setw(2) << setfill('0') << second << "\n";    
}
 
bool Time :: equals(Time otherTime)
{
    if(hour == otherTime.hour && 
        minute == otherTime.minute && 
        second == otherTime.second)
        return true;
    else
        return false;
}
 
int main()
{
    Time t1(10, 50, 59);
    t1.print();  // 10:50:59
    Time t2;  //object created with default value
    t2.print();  // 00:00:00
    t2.setTime(6, 39, 9); //set the new time in object
    t2.print();  // 06:39:09
   
    if(t1.equals(t2))
        cout << "Two objects are equals\n";
    else
        cout << "Two objects are not equals\n";    
  
    return 0;
}
*/
// /*

#include <iostream>
#include <math.h>
using namespace std;
class Duration
{
    int hh;
    int mm;
    int ss;
    public:
    Duration() : hh(0), mm(0), ss(0) { }
    Duration(int a, int b, int c) {
        ss = c % 60;
        mm = (b + (c / 60)) % 60;
        hh = a + (b + (c / 60)) / 60;
    }
    void getDuration() {
        int a,b,c;
        cout << "Enter hours: "; cin >> a;
        cout << "Enter minutes: "; cin >> b;
        cout << "Enter seconds: "; cin >> c;
        ss = c % 60;
        mm = (b + (c / 60)) % 60;
        hh = a + (b + (c / 60)) / 60;
    }
    void showDuration() {
        cout << "Duration hours: " << hh << endl;
        cout << "Duration minutes: " << mm << endl;
        cout << "Duration seconds: " << ss << endl;
    }
    Duration addDuration(const Duration& d) {
        return Duration(hh + d.hh, mm + d.mm, ss + d.ss);
    }
};
int main()
{
    Duration d2, d1(1, 90, 30); // 2.30.30
    cout << "Duration d1 details: " << endl;
    d1.showDuration();
    cout << endl;
    cout << "Enter d2 duration details: " << endl;
    d2.getDuration(); // 2.70.130 --> 3.12.10
    cout << endl;
    cout << "Duration d2 details: " << endl;
    d2.showDuration();
    cout << endl;
    Duration d3 = d1.addDuration(d2); // 5.42.40
    cout << "Duration d3(d1 + d2) details: " << endl;
    d3.showDuration();
    return 0;
}
// */
