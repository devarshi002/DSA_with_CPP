#include <iostream>
#include <string>
using namespace std;


class Teacher {
public:
    string name;
    string dept;
    string subject;
    double salary;


    void changeDept(string newDept) {
        dept=newDept;
    }
};



int main() {
    Teacher t1;
    t1.name = "Devarshi Tambulkar";
    t1.dept = "Computer Engineering";
    t1.subject = "C++";
    t1.salary = 50000;

    cout << t1.name << endl;
    cout << t1.dept << endl;
    cout << t1.subject << endl;
    cout << t1.salary << endl;
    return 0;
}