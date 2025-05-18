#include <iostream>
#include <string>
using namespace std;

class MyString {
    string s;
public:
    MyString(string str) : s(str) {}

    bool operator > (MyString b) {
        return s.length() > b.s.length();
    }

    bool operator < (MyString b) {
        return s.length() < b.s.length();
    }

    bool operator == (MyString b) {
        return s.length() == b.s.length();
    }

    string get() { return s; }
};

int main() {
    MyString a("hello"), b("worldwide");

    if (a > b)
        cout << a.get() << " is longer\n";
    else if (a < b)
        cout << b.get() << " is longer\n";
    else
        cout << "Both strings are equal in length\n";

    return 0;
}
