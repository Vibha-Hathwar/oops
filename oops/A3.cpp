/*3. Write a C++ program to create a class to represent entities of type Circle,
specificed by its attribute’s radius and coordinates of its center. Include
appropriate Constructors and display methods. Also write a friend function that
determines whether two circles intersect one another or they touch each other or
they are disjoint.
*/
#include <iostream>
#include <math.h>
using namespace std;
class Circle 
{
    int radius;
    int centerX;
    int centerY;
    public:
    Circle(): radius(0), centerX(0), centerY(0) { }
    Circle(int r) : radius(r), centerX(0), centerY(0) { }
    Circle(int r, int x, int y) : radius(r), centerX(x), centerY(y) { }
    void displayCircle() 
    {
        cout << "Circle details: " << endl;
        cout << "Circle radius: " << radius << endl;
        cout << "Circle center x coordinate: " << centerX << endl;
        cout << "Circle center y coordinate: " << centerY << endl;
    }
    friend void computeType(Circle&, Circle&);
};
void computeType(Circle& a, Circle& b)
{
    double d = sqrt(pow(a.centerX - b.centerX, 2) + pow(a.centerY - b.centerY, 2));
    if (d <= a.radius - b.radius)
        cout << "Circle B is inside A" << endl;
    else if (d <= b.radius - a.radius)
        cout << "Circle A is inside B" << endl;
    else if (d < a.radius + b.radius)
        cout << "Circle A and B intersect to each other" << endl;
    else if (d > a.radius + b.radius)
        cout << "Circle A and B are disjoint" << endl;
    else 
        cout << "Circle A and B touch to each other" << endl;
}
int main()
{
    Circle a(30, -10, 8), b(10, 14, -24);
    a.displayCircle();
    cout << endl;
    b.displayCircle();
    cout << endl;
    computeType(a, b);
    return 0;
}
