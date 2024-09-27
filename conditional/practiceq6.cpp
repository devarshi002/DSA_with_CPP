#include <iostream>
using namespace std;

int main() {
    int n = 5; // Example value

    for (int i = 1; i <= n; i++) {
        int factorial = 1; // Reset factorial for each number

        for (int j = 1; j <= i; j++) {
            factorial *= j; // Calculate factorial of i
        }

        cout << "Factorial of " << i << " is: " << factorial << endl;
    }

    return 0;
}
