#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    vec.push_back(20);               // push_back function
    vec.push_back(30);
    vec.push_back(40); 
    cout << "Size = " << vec.size() << endl;   // size of fuction to check size of vector
    vec.pop_back();   //pop_back fucn to pull out the element from vector
    for(int i : vec) {
        cout << i << endl;
    }

    vec.front();     // access first ele
    vec.back();      // access last ele
    cout << vec.at(0) << endl;       // access at perticular position
    return 0;
}