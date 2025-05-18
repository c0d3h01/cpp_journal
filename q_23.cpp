#include <iostream>
using namespace std;

class PascalTriangle {
private:
    int rows;

public:
    PascalTriangle(int r) {
        rows = r;
    }

    int factorial(int n) {
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }

    int combination(int n, int r) {
        return factorial(n) / (factorial(r) * factorial(n - r));
    }

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int space = 0; space < rows - i; space++) {
                cout << " ";
            }

            for (int j = 0; j <= i; j++) {
                cout << combination(i, j) << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> n;

    PascalTriangle pt(n);
    cout << "\nPascal's Triangle:\n";
    pt.display();

    return 0;
}
