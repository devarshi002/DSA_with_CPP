#include <iostream>
#include <string>
using namespace std;

class Teacher {
   
private:
    double salary;


public:// entities of class 
   Teacher() {
        cout << "Hi, I am constructor\n";
    }
    string name;
    string subject;
    string dept;


    void change_dept(string new_dept) {
        dept = new_dept;
    }


    void setSalary(double s) {
        salary = s;
    }

    double getSalary() {
        return salary;
    }
};


int main() {
     Teacher T1;
     Teacher T2;
     T1.name = "Devarshi Subhash Tambulkar";
     T1.subject = "DSA";
     T1.dept = "Computer Engineering";
     T1.setSalary(25000);

     cout << T1.name << endl;
     cout << T1.subject << endl;
     cout << T1.dept << endl;
     cout << T1.getSalary() << endl;     


 return 0;   
}
