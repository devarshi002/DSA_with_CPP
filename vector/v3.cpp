#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> vec = {'a','b','c','d','e'};
    cout << "Size = " << vec.size() << endl;   // size of fuction to check size of vector
    for(char i : vec) {
        cout << i << endl;
    }
    return 0;
}