#include <iostream>
using namespace std;

class FactorialCopy {
public:
    int fact, num, i;

    FactorialCopy(int n) {
        num = n;
        fact = 1;
    }

    FactorialCopy(FactorialCopy &n) {
        num = n.num;
        fact = 1;
    }

    void calculate() {
        for (int i = 1; i <= num; i++)
            fact = fact * i;
    }

    void display() {
        cout << "Factorial of " << num << " is " << fact << endl;
    }
};

int main() {
    int num;

    cout << "Enter the number to find factorial:\t";
    cin >> num;
    cout << endl;

    cout << "Printing from constructor:" << endl;
    FactorialCopy fact(num);
    fact.calculate();
    fact.display();
    cout << endl;

    cout << "Printing from copy constructor:" << endl;
    FactorialCopy factcopy(fact);
    factcopy.calculate();
    factcopy.display();

    return 0;
}
