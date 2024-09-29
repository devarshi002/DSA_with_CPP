#include <iostream>
using namespace std;


int sumofDigits(int num) {
    int digit = 0;

    while (num > 0)
    {
        int lastdigit = num % 10;
        num /= 10;
        digit += lastdigit;
    }
    return digit;
}




int main() {
    cout << "Sum is : " << sumofDigits(2356) << endl;
    return 0;
}