#include <iostream>
using namespace std;

int countOccurrences(int arr[], int size, int target) {
    int count = 0; // Initialize count variable
    
    // Traverse the array
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++; // Increment count if the target is found
        }
    }
    
    return count; // Return the total count
}

int main() {
    // Example array
    int numbers[] = {5, 12, 7, 9, 5, 3, 5, 8, 12};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Element to count occurrences of
    int target;
    cout << "Enter the element to count occurrences for: ";
    cin >> target;

    // Perform linear search to count occurrences
    int result = countOccurrences(numbers, size, target);

    cout << "The element " << target << " appears " << result << " times in the array." << endl;

    return 0;
}
