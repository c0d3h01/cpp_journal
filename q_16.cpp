#include <iostream>
using namespace std;

class Fibonacci {
    int n1 = 0, n2 = 1, n3, i, number;

public:
    void getdata() {
        cout << "Enter the number of elements: ";
        cin >> number;
        cout << n1 << " " << n2 << " ";
    }

    void findFibonacci() {
        for (i = 2; i < number; i++) {
            n3 = n1 + n2;
            cout << n3 << " ";
            n1 = n2;
            n2 = n3;
        }
    }
};

int main() {
    Fibonacci f;
    f.getdata();
    f.findFibonacci();
    return 0;
}
