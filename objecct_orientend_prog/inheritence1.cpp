#include <iostream>
using namespace std;

class Person {
    public:
      string name;
      int age;

      person() {

      }
};

class Student : public Person {
    public:
       int rollno;

       void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Rollno: " << rollno << endl;
       }
};


int main() {
    Student s1;
    s1.name = "Devarshi Tambulkar";
    s1.age = 22;
    s1.rollno = 60;

    s1.getInfo();
    return 0;
}