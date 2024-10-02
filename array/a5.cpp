#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -15, -24};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int smallestIndex = -1;
    int largestIndex = -1;

    for (int i = 0; i < size; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
            smallestIndex = i;
        }
        if (nums[i] > largest) {
            largest = nums[i];
            largestIndex = i;
        }
    }

    // Updated to ensure proper spacing and casing in the output
    cout << "Smallest number: " << smallest << " at index " << smallestIndex << endl;
    cout << "Largest number: " << largest << " at index " << largestIndex << endl; // Fixed casing

    return 0;
}
