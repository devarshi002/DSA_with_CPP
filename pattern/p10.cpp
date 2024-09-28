#include <iostream>
using namespace std;

int main() {
    int n = 10;

    for (int i = 0; i < n; i++)
    {
        //spaces
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }

        //left-no
        for (int j = 1; j <= i+1; j++)
        {
            cout << j;
        }

        //right-no
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
        
        
    }
    return 0;
}