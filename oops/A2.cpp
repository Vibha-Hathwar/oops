/*2. Write a C++ program to show single inheritance which is privately inherited.
Display all the data members of base class and derived class using derived class
object.
*/
#include <iostream>
#include <vector>
using namespace std;
class Person {
private:
string name;
char gender;
int age;
public:
void setDetails() {
cout << "Enter person name: "; cin >> name;
cout << "Enter person gender: "; cin >> gender;
cout << "Enter person age: "; cin >> age;
}
void getDetails() {
cout << "Person name: " << name << endl;
cout << "Person gender: " << gender << endl;
cout << "Person age: " << age << endl;
}
};
class Employee : private Person {
int salary;
float experience;
vector<string> skills;
public:
void setDetails() {
cout << "Enter employee details: " << endl;
Person::setDetails();
cout << "Enter employee salary: "; cin >> salary;
cout << "Enter employee experience: "; cin >> experience;
cout << "Enter employee skills, type \"end\" to terminate: ";
string input;
cin >> input;
while (input != "end") {
skills.push_back(input);
cin >> input;
}
}
void getDetails() {
cout << "Employee details: " << endl;
Person::getDetails();
cout << "Employee salary: " << salary << endl;
cout << "Employee experience: " << experience << endl;
cout << "Employee skills: ";
for (int i = 0; i < skills.size(); i++) {
cout << skills[i] << " ";
}
cout << endl;
}
};
int main() {
Employee e;
e.setDetails();
cout << endl;
e.getDetails();
return 0;
}
