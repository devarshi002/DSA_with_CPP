#include <iostream>
using namespace std;

int main() {
    // Declaring two boolean variables
    bool a = true;
    bool b = false;

    // AND (&&) operator
    if (a && b) {
        cout << "Both are true" << endl;
    } else {
        cout << "At least one is false" << endl;  // This will be printed
    }

    // OR (||) operator
    if (a || b) {
        cout << "At least one is true" << endl;  // This will be printed
    } else {
        cout << "Both are false" << endl;
    }

    // NOT (!) operator
    if (!b) {
        cout << "b is false, NOT b is true" << endl;  // This will be printed
    }

    return 0;
}
