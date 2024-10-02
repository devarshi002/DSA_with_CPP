#include <iostream>
using namespace std;

int main() {
    int marks[5] = {99, 45, 67, 87, 77};
    int size = 5;

    cout << sizeof(marks) / sizeof(int) << endl;

    return 0;
}