#include <iostream>
using namespace std;


int decimalTobinary(int dec) {
    int ans =0, pow = 1;

    // while loop
    while (dec > 0)
    {
        int rem = dec % 2;
        dec /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}



int main() {

    int dec = 50;

    for (int i = 1; i <= 10; i++)
    {
         cout << "Decimal: " << i << " -> Binary: " << decimalTobinary(i) << endl;
    }
    
    return 0;
}