// Create a class Car with attributes like make, model, and year. Create an object of this class and print the values of the attributes.

#include <iostream>
using namespace std;

class Car {
    private:
        string make;
        string model;
        int year;

    public:
    // Constructor
        Car(string m, string mo, int y) : make(m), model(mo), year(y) {}

        // function to display car details

        void displayDetails() {
            cout << "make: " << make << endl;
            cout << "model: " << model << endl;
            cout << "year: " << year << endl;

        }
};

int main() {
    //Create obj for car
    Car myCar("Toyota", "Corolla", 2020);

    //Display details
    myCar.displayDetails();

    return 0;
};