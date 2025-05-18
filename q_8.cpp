#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    Number operator*(Number obj) {
        return Number(value * obj.value);
    }

    bool operator==(Number obj) {
        return value == obj.value;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n1(5), n2(3), n3(5), result;

    cout << "First number: ";
    n1.display();

    cout << "Second number: ";
    n2.display();

    // Multiplication
    result = n1 * n2;
    cout << "Multiplication (n1 * n2): ";
    result.display();

    // Equality check
    if (n1 == n3) {
        cout << "n1 is equal to n3" << endl;
    } else {
        cout << "n1 is not equal to n3" << endl;
    }

    return 0;
}
