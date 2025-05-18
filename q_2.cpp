#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, reversedStr;
    cout << "Enter a string :";
    cin >> str;

    reversedStr = string(str.rbegin(), str.rend());

    if (str == reversedStr) {
        cout << "The string is palindrome: " << endl;
    } else {
        cout << "This string is not a palindrome." << endl;
    }
    return 0;
}