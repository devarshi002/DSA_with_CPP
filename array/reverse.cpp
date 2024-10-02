#include <iostream>
using namespace std;


void reverseArray(int arr[], int sz) {
    int start = 0; int end = sz - 1;

    while (start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
    
}


int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5}; // Add a semicolon at the end
    int sz = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array

    reverseArray(arr, sz);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}