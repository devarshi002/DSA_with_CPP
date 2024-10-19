#include <iostream>
#include <string>
using namespace std;


class Teacher {
public:
    string name;
    string dept;
    string subject;
    double salary;

    // non-parameterize consturctor
    // Teacher() {
    //     dept = "Computer science";
    // }


    // parameterized constructor
    Teacher(string name, string dept, string subject, double salary) {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }


    // void changeDept(string newDept) {
    //     dept=newDept;
    // }

    void getinfo() {
        cout << "Name: " << name << endl;
        cout << "Dept: " << dept << endl;
    };
};



int main() {
    Teacher t1("Devarshi","computer engineering","C++",90000);
    // t1.name = "Devarshi Tambulkar";
    // t1.subject = "C++";
    // t1.salary = 50000;

    // cout << t1.dept << endl;
    t1.getinfo();
    return 0;
}