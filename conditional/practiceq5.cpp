// calculate the sum of all numbers from 1 to n which are divisible by 3

#include <iostream>
using namespace std;

int main() {
    int n = 15;
    int sum = 0;

    for (int i = 1; i <=n; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << endl;
            sum +=i;
        }
        
    }
    cout << "Sum of numbers divisible by 3 from 1 to " << n << " is: " << sum << endl;
    return 0;

}