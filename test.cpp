#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void input() = 0;
    virtual void calculateArea() = 0;
    virtual void calculatePerimeter() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    float radius;

public:
    void input() override {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }

    void calculateArea() override {
        cout << "Area of circle: " << 3.14159 * radius * radius << endl;
    }

    void calculatePerimeter() override {
        cout << "Perimeter (Circumference) of circle: " << 2 * 3.14159 * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    float length, width;

 intimeout() override {
        cout << "Enter length and width of rectangle: ";
        cin >> length >> width;
    }

    void calculateArea() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }

    void calculatePerimeter() override {
        cout << "Perimeter of Rectangle: " << 2 * (length + width) << endl;
    }
};

class Triangle : public Shape {
private:
    float a, b, c;

    // Helper function to validate triangle
    bool isValidTriangle() {
        if (a <= 0 || b <= 0 || c <= 0) {
            return false;
        }
        if (a + b <= c || b + c <= a || a + c <= b) {
            return false;
        }
        return true;
    }

public:
    void input() override {
        cout << "Enter the three sides of the triangle: ";
        cin >> a >> b >> c;
    }

    void calculateArea() override {
        if (!isValidTriangle()) {
            cout << "Invalid triangle! Cannot calculate area." << endl;
            return;
        }
        float s = (a + b + c) / 2;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Area of Triangle: " << area << endl;
    }

    void calculatePerimeter() override {
        if (!isValidTriangle()) {
            cout << "Invalid triangle! Cannot calculate perimeter." << endl;
            return;
        }
        cout << "Perimeter of Triangle: " << (a + b + c) << endl;
    }
};

int main() {
    Shape* shape;

    cout << "\n--- Circle ---\n";
    shape = new Circle();
    shape->input();
    shape->calculateArea();
    shape->calculatePerimeter();
    delete shape;

    cout << "\n--- Rectangle ---\n";
    shape = new Rectangle();
    shape->input();
    shape->calculateArea();
    shape->calculatePerimeter();
    delete shape;

    cout << "\n--- Triangle ---\n";
    shape = new Triangle();
    shape->input();
    shape->calculateArea();
    shape->calculatePerimeter();
    delete shape;

    return 0;
}
