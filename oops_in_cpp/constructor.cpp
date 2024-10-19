#include <iostream>
#include <string>
using namespace std;


class Teacher {
public:
    Teacher() {
        dept = "Computer science";
    }
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
    t1.subject = "C++";
    t1.salary = 50000;

    cout << t1.dept << endl;
    return 0;
}