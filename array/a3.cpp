#include <iostream>
using namespace std;

int main() {
    const int size = 5;  // Array size must be a constant
    int marks[size];     // Declare array with constant size

    cout << "Enter marks for " << size << " students:" << endl;

    // Input marks for each student
    for (int i = 0; i < size; i++) {
        cout << "Enter marks for student " << i + 1 << ": ";
        cin >> marks[i];  // Read input and store in the array
    }

    // Output the marks entered
    cout << "\nThe marks you entered are:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Marks for student " << i + 1 << ": " << marks[i] << endl;
    }

    return 0;
}
