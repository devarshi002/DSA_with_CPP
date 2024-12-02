// Create a class Person with attributes name and age. Implement a default constructor that assigns default values to the attributes. Create an object and display the values.

#include <iostream>
using namespace std;

class Person {
    public:
       string name;
       int age;
    
    Person() {
        name = "Deva";
        age = 22;
    }
};

int main() {
    Person p1;

    cout << "Name: " << p1.name << endl;
    cout << "age: " << p1.age << endl;

    return 0;
}