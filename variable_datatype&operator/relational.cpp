#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 20;

    // Equal to
    if (x == y) {
        cout << "x is equal to y" << endl;
    } else {
        cout << "x is not equal to y" << endl;
    }

    // Greater than
    if (x > y) {
        cout << "x is greater than y" << endl;
    } else {
        cout << "x is not greater than y" << endl;
    }

    // Less than or equal to
    if (x <= y) {
        cout << "x is less than or equal to y" << endl;
    } else {
        cout << "x is greater than y" << endl;
    }

    return 0;
}
