#include <iostream>
using namespace std;

class StringReverser {
private:
    string str;

public:
    StringReverser(string s) {
        str = s;
    }

    void displayReversed() {
        cout << "Reversed String: ";
        for (int i = str.length() - 1; i >= 0; i--) {
            cout << str[i];
        }
        cout << endl;
    }
};

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    StringReverser sr(input);
    sr.displayReversed();

    return 0;
}
