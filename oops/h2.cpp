//  ADA
//grading students
vector<int> gradingStudents(vector<int> grades)
{
    for(int i=0;i<grades.size();i++)
    {
        if(grades[i]>=38)
        {
            int rem=grades[i]%5;
            if(5-rem<3)
                grades[i]=grades[i]+(5-rem);
        }
    }
    return grades;
}
//google
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++)
    {
        int grade;
        cin >> grade;    
        if (grade < 38)
        {
            cout << grade << "\n";
            continue;
        }
        int rem = grade % 5;
        if (5 - rem < 3)
            grade += 5 - rem;
        cout << grade << "\n";
    }
    return 0;
}
