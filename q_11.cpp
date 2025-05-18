#include <iostream>
#include <cmath>
using namespace std;

class Area {
public:
    float calculate(float radius) {
        return 2 * 3.14159 * radius;
    }

    float calculate(float base, float height) {
        return 0.5 * base * height;
    }

    float calculate(float radius, float height, bool isCylinder) {
        if (isCylinder)
            return 2 * 3.14159 * radius * (radius + height);
        else
            return 0;
    }
};

int main() {
    Area a;
    float radius = 5.0;
    float base = 6.0, height = 4.0;
    float cylRadius = 3.0, cylHeight = 7.0;

    cout << "Circumference of circle (r = " << radius << ") : "
         << a.calculate(radius) << endl;

    cout << "Area of triangle (base = " << base << ", height = "
         << height << ") : " << a.calculate(base, height) << endl;

    cout << "Surface area of cylinder (r = " << cylRadius << ", h = "
         << cylHeight << ") : "
         << a.calculate(cylRadius, cylHeight, true) << endl;

    return 0;
}
