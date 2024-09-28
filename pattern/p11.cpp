#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n-1; j++)
        {
            cout << " " ;
        }
        for (int j = 0; j < 2*i+1; j++)
        {
            if (j == 0 || j == (2*i))
            {
                cout << "*";
            } else
            {
                cout << " ";
            }
            
            
        }
        
        cout << endl;
    }

    for (int i = n-2; i >=0; i--)
    {
        for (int j = n-1; j>i; j--)
        {
            cout << " ";
        }

        for (int j = 0; j < (2*i+1); j++)
        {
            if (j == 0 || j == (2*i))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            
        }
        
        cout << endl;
    }
    return 0;






}