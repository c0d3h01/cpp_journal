#include <iostream>
using namespace std;

int main() {
    int numerator, denominator;
    float result;

    cout << "Enter the dividend: ";
    cin >> numerator;

    cout << "\nEnter the divisor: ";
    cin >> denominator;
    cout << "\n";

    // Exception handling begins here
    try {
        if (denominator != 0) {
            result = static_cast<float>(numerator) / denominator;
            cout << "ANSWER: " << result;
        } else {
            throw(denominator);
        }
    } catch (int exc) {
        cout << "Division by zero is not possible. Please try again with different value of variables.";
    }

    return 0;
}
