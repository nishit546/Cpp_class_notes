#include <iostream>
#include <string>
using namespace std;

class Car{
public:
    string car_name;
    float price;
    static int totalCars;

    Car(string name , float p){
        car_name = name;
        price = p;
        totalCars++;
    }

    void display(){
        cout << car_name << endl;
        cout << price << endl;
    }

    static void showTotalCars(){
        cout << totalCars << endl;
    }
};

int Car::totalCars = 0;

int main(){

    Car c1("BMW", 5000000);
    Car c2("Audi", 6000000);
    Car c3("Mercedes", 70000000);

    c1.display();
    c2.display();
    c3.display();

    Car::showTotalCars();

    return 0;
}