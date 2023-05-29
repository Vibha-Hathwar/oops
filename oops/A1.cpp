/*1. Define a person class with suitable data members and functions. Derive student
and professor classes from person. Create an array of pointer to person class.
Determine whether the person is outstanding. For a student to be outstanding
his/her CGPA > 9.0 and for professor his/her publications in referred journals must
be > 10.
*/
#include <iostream>
#include <vector>
using namespace std;
class Person 
{
    private:
    char gender;
    int age;
    protected:
    string name;
    public:
    virtual void setDetails()
    {
        cout << "Enter name: "; cin >> name;
        cout << "Enter gender: "; cin >> gender;
        cout << "Enter age: "; cin >> age;
    }
    virtual void getDetails()
    {
        cout << "Person name: " << name << endl;
        cout << "Person gender: " << gender << endl;
        cout << "Person age: " << age << endl;
    }
    virtual void isOutstanding() = 0;
};
class Student : public Person
{
    char semister;
    float cgpa;
    public:
    void setDetails()
    {
        cout << "Enter student details: " << endl;
        Person::setDetails();
        cout << "Enter student semister: "; cin >> semister;
        cout << "Enter student cgpa: "; cin >> cgpa;
    }
    void getDetails()
    {
        cout << "Student details: " << endl;
        Person::getDetails();
        cout << "Student semister: " << semister << endl;
        cout << "Student cgpa: " << cgpa << endl;
    }
    void isOutstanding()
    {
        if (cgpa > 9.0) {
            cout << "Person " << name << " is outstanding" << endl;
        } else {
            cout << "Person " << name << " is not outstanding" << endl;
        }
    }
};
class Professor : public Person
{
    vector<string> subjects;
    int publications;
    public:
    void setDetails()
    {
        cout << "Enter professor details: " << endl;
        Person::setDetails();
        cout << "Enter professor subjects, type \"end\" to terminate: ";
        string input;
        cin >> input;
        while (input != "end") {
            subjects.push_back(input);
            cin >> input;
        }
        cout << "Enter professor publications: "; cin >> publications;
    }
    void getDetails()
    {
        cout << "Professor details: " << endl;
        Person::getDetails();
        cout << "Professor subjects: ";
        for (int i = 0; i < subjects.size(); i++) {
            cout << subjects[i] << " ";
        }
        cout << endl << "Professor publications: " << publications << endl;
    }
    void isOutstanding()
    {
        if (publications > 10) {
            cout << "Person " << name << " is outstanding" << endl;
        } else {
            cout << "Person " << name << " is not outstanding" << endl;
        }
    }
};
int main()
{
    Student s;
    Professor p;
    Person* pArr[] = {&s, &p};
    pArr[0]->setDetails();
    cout << endl;
    pArr[1]->setDetails();
    cout << endl;
    pArr[0]->getDetails();
    pArr[0]->isOutstanding();
    cout << endl;
    pArr[1]->getDetails();
    pArr[1]->isOutstanding();
    return 0;
}
