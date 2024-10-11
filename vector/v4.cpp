#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    cout << "Size = " << vec.size() << endl;   // size of fuction to check size of vector
    vec.push_back(20);               // push_back function 
    cout << "Size after push back is : " << vec.size() << endl;
    for(int i : vec) {
        cout << i << endl;
    }
    return 0;
}