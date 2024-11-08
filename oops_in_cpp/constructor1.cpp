#include <iostream>
#include <string>
using namespace std;

class Example {
    public:
       int value;
       Example() {
        value = 0;
        cout << "Default constructor called!" << endl;
       }
};

int main() {
    Example ex1;

    return 0;
};
