// triangle pattern


// *
// **
// ***
// ****


#include <iostream>
using namespace std;

int main() {

    int n = 4;

    for (int i = 0; i < n; i++)
    {
        

        for (int j = 0; j < i+1; j++)
        {
            cout << char('A'+ i);
        }
        cout << endl;
    }
    return 0;
}