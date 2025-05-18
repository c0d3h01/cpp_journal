#include <iostream>
using namespace std;

int main() {
    cout << "Prime numbers between 1 and 100 are:\n";

    for (int num = 2; num <= 100; num++) {
        int count = 0;
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                count++;
            }
        }
        if (count == 2) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
