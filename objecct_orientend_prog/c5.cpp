// Create a class Circle with an attribute radius and a member function calculateArea() that calculates and returns the area of the circle. Create an object and call the member function.

#include <iostream>
using namespace std;

class Circle {
    public:
       double radius;

       double calculateArea() {
        return 3.14*radius*radius;
       }
};

int main() {
    Circle C1;
    C1.radius=10.0;

    cout << "Area of Circle: " << C1.calculateArea() << endl;

    return 0;
}