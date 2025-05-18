#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    Number operator+(Number obj) {
        return Number(value + obj.value);
    }

    Number operator-(Number obj) {
        return Number(value - obj.value);
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n1(10), n2(4), result;

    cout << "First number: ";
    n1.display();

    cout << "Second number: ";
    n2.display();

    result = n1 + n2;
    cout << "After addition: ";
    result.display();

    result = n1 - n2;
    cout << "After subtraction: ";
    result.display();

    return 0;
}
