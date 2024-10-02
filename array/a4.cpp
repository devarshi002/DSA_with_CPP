#include <iostream>
#include <climits>  // Include for INT_MAX
using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -15, -24};  
    int size = 6;

    int smallest = INT_MAX;  // Initialize smallest to the maximum integer value

    // Loop through the array to find the smallest number
    for (int i = 0; i < size; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
        }
    }

    // Output the smallest number
    cout << "Smallest number: " << smallest << endl;

    return 0;
}
