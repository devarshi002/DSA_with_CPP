// sum of all odd numbers from 1 to n

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int oddSum = 0;
    int i = 1;
    // for (int i = 0; i <= n; i++)
    // {
    //     if ( i%2 != 0)
    //     {
    //         cout << i << endl;
    //         oddSum += i;
    //     }
        
    // }

    while (i <= n)
    {
        if (i%2 != 0)
        {
            cout << i << endl;
            oddSum +=i;
        }
        i++;
    }
    
    cout << "sum of odd numbers is : " << oddSum << endl;

    return 0;
}