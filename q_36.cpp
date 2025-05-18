#include <iostream>
#define PI 3.14
using namespace std;

class Shape {
private:
    string color;
    float area;

public:
    void setColor(string c) {
        color = c;
    }

    string getColor() {
        return color;
    }

    void setArea(float a) {
        area = a;
    }

    float getArea() {
        return area;
    }

    virtual void calculateArea() = 0;
};

class Circle : public Shape {
private:
    float radius;

public:
    void setRadius(float r) {
        radius = r;
    }

    void calculateArea() {
        float a = PI * radius * radius;
        setArea(a);
    }
};

class Rectangle : public Shape {
private:
    float length, breadth;

public:
    void setDimensions(float l, float b) {
        length = l;
        breadth = b;
    }

    void calculateArea() {
        float a = length * breadth;
        setArea(a);
    }
};

int main() {
    Circle c;
    c.setColor("Red");
    c.setRadius(5);
    c.calculateArea();
    cout << "Circle Color: " << c.getColor() << endl;
    cout << "Circle Area: " << c.getArea() << endl;

    Rectangle r;
    r.setColor("Blue");
    r.setDimensions(4, 6);
    r.calculateArea();
    cout << "Rectangle Color: " << r.getColor() << endl;
    cout << "Rectangle Area: " << r.getArea() << endl;

    return 0;
}
