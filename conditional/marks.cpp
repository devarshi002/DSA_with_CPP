#include <iostream>
using namespace std;

int main() {
    float marks;
    cout << "Enter your marks for check your grade: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade is A";
    } else if (marks >=80 && marks < 90)
    {
        cout << "Grade is B";
    } else if (marks >=60 && marks < 80)
    {
        cout << "Grade is C";
    } else if (marks >= 45 && marks < 60)
    {
        cout << "Grade is D";
    } else
    {
        cout << "Grade is F! do Study";
    }
    
    
    return 0;
    
    
}