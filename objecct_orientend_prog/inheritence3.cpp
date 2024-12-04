#include <iostream>
using namespace std;

class JrStudent {
    public:
       string name;
       string std;
       int age;
};


class JrCollegeStudent : public JrStudent {
    public:
       float percentage;
};

class SrCollegeStudent : public JrCollegeStudent {
    public:
       string placement;
};


int main() {
    SrCollegeStudent s1;
    s1.name ="Devarshi Subhash Tambulkar";
    s1.age = 22;
    s1.std = "Final Year";
    s1.percentage = 8.47;
    s1.placement = "Nan";


    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.std << endl;
    cout << s1.percentage << endl;
    cout << s1.placement << endl;


    return 0;
};