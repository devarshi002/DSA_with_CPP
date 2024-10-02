#include <iostream>
#include <climits>  // Include for INT_MAX
using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -15, -24};  
    int size = 6;

    int smallest = INT_MAX;  // Initialize smallest to the maximum integer value
    int largest = INT_MIN;    // Initialize largest

    // Loop through the array to find the smallest number
    for (int i = 0; i < size; i++) {
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }

    // Output the smallest number
    cout << "Smallest number: " << smallest << endl;
    cout << "largest number: " << largest << endl;

    return 0;
}
