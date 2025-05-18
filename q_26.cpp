#include <iostream>
#include <cmath>
using namespace std;

class Number {
public:
    virtual void calculateSqrt() = 0;
};

class IntNumber : public Number {
    int num;
public:
    IntNumber(int n) : num(n) {}
    void calculateSqrt() override {
        cout << "Square root of int " << num << " is " 
             << sqrt((double)num) << endl;
    }
};

class FloatNumber : public Number {
    float num;
public:
    FloatNumber(float n) : num(n) {}
    void calculateSqrt() override {
        cout << "Square root of float " << num << " is " 
             << sqrt(num) << endl;
    }
};

class DoubleNumber : public Number {
    double num;
public:
    DoubleNumber(double n) : num(n) {}
    void calculateSqrt() override {
        cout << "Square root of double " << num << " is " 
             << sqrt(num) << endl;
    }
};

int main() {
    IntNumber intObj(25);
    FloatNumber floatObj(49.0F);
    DoubleNumber doubleObj(81.0);

    Number* ptr;

    ptr = &intObj;
    ptr->calculateSqrt();

    ptr = &floatObj;
    ptr->calculateSqrt();

    ptr = &doubleObj;
    ptr->calculateSqrt();

    return 0;
}
