#include <iostream>
using namespace std;

inline float simpleInterest(float principle, float rate, float time) {
    return (principle * rate * time) / 100;
}

int main() {
    float p, r, t;

    cout << "Enter Principle amount: ";
    cin >> p;

    cout << "Enter Rate of Interest: ";
    cin >> r;

    cout << "Enter Time: ";
    cin >> t;

    float si = simpleInterest(p, r, t);
    cout << "Simple Interest is: " << si << endl;

    return 0;
}
