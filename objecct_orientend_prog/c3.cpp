//Define a class Book with attributes title and author. Create an object of this class and display the values of the attributes.

#include <iostream>
using namespace std;

class Book {
    public:
       string title;
       string author;
};

int main() {
    Book book1;

    book1.title = "Chhota Bheem Our Kirmada";
    book1.author = "Mr. Devarshi Tambulkar";


    cout << "Book Title: " << book1.title << endl;
    cout << "Book Author" << book1.author << endl;


    return 0;
}