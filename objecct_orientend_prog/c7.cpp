#include <iostream>
using namespace std;

class MyClass {
    private:
        int x, y;

    public:
        
        //Default constructor
        MyClass() {
            x= 0;
            y = 0;
            cout << "Default constructor is called! x =" << x << ", y = " << y << endl;
        }

        // Parameterized constructor
        MyClass(int a, int b) {
            x = a;
            y = b;
            cout << "Parameterized constructor called! x = " << x << ", y = " << y << endl;
        }

        // copy constructor
        MyClass (const MyClass &obj) {
            x = obj.x;
            y = obj.y;
            cout << "Copy constructor called x = " << x << ", y = " << y << endl;
        }


        //Display function to show values of x  and y
        void display() {
            cout << "x = " << x << ", y = "<< y << endl;
        }
    
};


int main() {
    //Default constructor is call
    MyClass obj1;

    // parameterized constructor call
    MyClass obj2(10,20);

    // copy constructor call
    MyClass obj3 = obj2;

    // Display values
    obj2.display();
    obj3.display();
};