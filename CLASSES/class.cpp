#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string comp_name;
    int mileage;
    string engine;

    void print() {
        cout << "The print function is defined inside Car class" << endl;
        cout << "Company name is: " << this->comp_name << endl;
    }
};

int main() {
    cout << "Now creating the actual object of class -> Car" << endl;

    Car c1;             
    c1.comp_name = "BMW";
    c1.mileage = 15;
    c1.engine = "Petrol";

    c1.print();       
cout << "The function is called.. " << endl;
    return 0;
}