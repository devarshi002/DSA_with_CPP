#include <iostream>
#include <string>
using namespace std;

class Example {
    public:
       int value;
        // Default constructor
       Example() {
        value = 0;
        cout << "Default constructor called!" << endl;
       }

       // parameterized constructor
       Example(int x) {
        value = x;
        cout << "Parameterized constructor called with value: " << value << endl;
       };
};

int main() {
    Example ex1;
    Example ex2(10);

    return 0;
};
