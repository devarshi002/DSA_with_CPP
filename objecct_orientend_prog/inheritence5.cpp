#include <iostream>
using namespace std;

class Base1 {
    public:
    void show() {
        cout << "Base 1" << endl;
    }
};

class Base2 {
    public:
    void show() {
        cout << "Base 2" << endl;
    }
};

class Derived : public Base1, public Base2 {

};

int main() {
    Derived d1;
    d1.Base1::show();
    d1.Base2::show();


    return 0;
};