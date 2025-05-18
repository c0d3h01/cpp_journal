#include <iostream>
using namespace std;

class shape {
public:
    virtual void area() = 0;
};

class circle : public shape {
    double radius;
public:
    circle(double r) {
        radius = r;
    }

    void area() {
        double result = 3.14 * radius * radius;
        cout << "Area of circle: " << result << endl;
    }
};

class square : public shape {
    double side;
public:
    square(double s) {
        side = s;
    }

    void area() {
        double result = side * side;
        cout << "Area of square: " << result << endl;
    }
};

class triangle : public shape {
    double base, height;
public:
    triangle(double b, double h) {
        base = b;
        height = h;
    }

    void area() {
        double result = 0.5 * base * height;
        cout << "Area of triangle: " << result << endl;
    }
};

int main() {
    circle c(5);
    square s(4);
    triangle t(6, 3);

    c.area();
    s.area();
    t.area();

    return 0;
}
