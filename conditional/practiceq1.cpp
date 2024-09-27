// calculate the sum of numbers
#include <iostream>
using namespace std;

int main() {
    int n = 30;
    int sum = 0;
    int i = 0;

    for (int i = 0; i <= n; i++)
    {
        sum += i;
        if (i == 5)
        {
            break;
        }
        
    }
    cout << "sum : " << sum << endl;

    return 0;
}