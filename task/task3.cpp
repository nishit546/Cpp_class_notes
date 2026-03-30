#include <iostream>
using namespace std;

class Shape {
public:
    float length;
    float width;

    Shape(float length, float width) {
        this->length = length;
        this->width = width;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(float length, float width) : Shape(length, width) {}

    void areaRectangle() {
        cout << "Area of Rectangle: " << this->length * this->width << endl;
    }
};

class Triangle : public Shape {
public:
    Triangle(float length, float width) : Shape(length, width) {}

    void areaTriangle() {
        cout << "Area of Triangle: " << (this->length * this->width) / 2 << endl;
    }
};

int main() {

    Rectangle r(10.392, 6.69);
    Triangle t(10.392, 6.69);

    r.areaRectangle();
    t.areaTriangle();

    return 0;
}