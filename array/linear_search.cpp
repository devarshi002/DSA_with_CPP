#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target) { // Change parameter type to int arr[]
    for (int i = 0; i < sz; i++) {
        if (arr[i] == target) {
            return i; // Return index where target is found
        }
    }
    return -1; // Return -1 if target is not found
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5}; // Add a semicolon at the end
    int sz = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array
    int target = 8;

    int result = linearSearch(arr, sz, target); // Call linearSearch and store the result

    if (result != -1) {
        cout << "Element found at index: " << result << endl; // Output the index
    } else {
        cout << "Element not found" << endl; // Output if not found
    }

    return 0;
}
