#include <iostream>
using namespace std;

class Base1 {
    public:
       void ShowBase1() {
        cout << "This is Base1 class" << endl;
       }
};

class Base2 {
    public:
       void ShowBase2() {
        cout << "This is Base2 class" << endl;
       }
};

class Derived : public Base1, public Base2 {
    public:
       void ShowDerived() {
        cout << "This is derived class" << endl;
       }
};

int main() {
    Derived d1;
    d1.ShowBase1();
    d1.ShowBase2();
    d1.ShowDerived();

    return 0;
};