#include <iostream>
#include <string>
using namespace std;

class Teacher {
public:// entities of class 
    string name;
    string subject;
    string dept;
    float salary;


    void change_dept(string new_dept) {
        dept = new_dept;
    }
};


int main() {
     Teacher T1;
     T1.name = "Devarshi Subhash Tambulkar";
     T1.subject = "DSA";
     T1.dept = "Computer Engineering";
     T1.salary = 25000;


     cout << T1.name << endl;
     cout << T1.subject << endl;
     cout << T1.dept << endl;
     cout << T1.salary << endl;
     

 return 0;   
}
