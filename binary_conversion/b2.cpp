#include <iostream>
using namespace std;

int binaryToDecimal(int bin) {
    int ans = 0, pow = 1;

    // Convert binary to decimal
    while (bin > 0) {
        int lastDigit = bin % 10;  // Extract the last digit of the binary number
        bin /= 10;                 // Remove the last digit from the binary number
        ans += lastDigit * pow;    // Add the value to the decimal equivalent
        pow *= 2;                  // Increase the power of 2
    }
    return ans;
}

int main() {
    // Loop to test the function for binary numbers 1 to 10 in binary
    int bin = 1111;
    cout << binaryToDecimal(bin) << endl;
    
    return 0;
}
