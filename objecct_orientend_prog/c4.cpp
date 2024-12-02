//Define a class Rectangle with attributes length and width. Use a constructor to initialize these attributes when the object is created.

#include <iostream>
using namespace std;

class Rectangle {
    public:
      int length;
      int width;

      Rectangle(int l, int w) {
        length = l;
        width = w;
      }
};

int main() {
    Rectangle rect(5,10);

    cout << "Length: " << rect.length << endl;
    cout << "width: " << rect.width << endl;


    return 0;

}