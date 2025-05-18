#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    void getData() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex subtract(Complex c) {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, sum, diff;

    cout << "Enter first complex number:\n";
    c1.getData();

    cout << "\nEnter second complex number:\n";
    c2.getData();

    sum = c1.add(c2);
    diff = c1.subtract(c2);

    cout << "\nSum of the two complex numbers: ";
    sum.display();

    cout << "Difference of the two complex numbers: ";
    diff.display();

    return 0;
}
