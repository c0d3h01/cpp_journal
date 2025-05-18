#include <iostream>
using namespace std;

class Test {
public:
    int x;
    Test() {
        cout << "Enter a number: ";
        cin >> x;
    }

    void check() {
        int i, p = 0;
        for (i = 2; i < x; i++) {
            if (x % i == 0) {
                p = 1;
                break;
            }
        }

        if (p == 0)
            cout << "Number is prime: " << x << endl;
        else
            cout << "Number is not prime: " << x << endl;
    }
};

int main() {
    Test obj;
    obj.check();
    return 0;
}
