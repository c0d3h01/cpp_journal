#include <iostream>
#include <string>
using namespace std;

class Login {
private:
    string correctUserID = "admin";
    string correctPassword = "1234";

public:
    void authenticate(string userID, string password) {
        if (userID != correctUserID || password != correctPassword) {
            throw "Invalid credentials!";
        } else {
            cout << "Login successful!" << endl;
        }
    }
};

int main() {
    Login login;
    string userID, password;

    cout << "Enter User ID: ";
    cin >> userID;

    cout << "Enter Password: ";
    cin >> password;

    try {
        login.authenticate(userID, password);
    } catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }

    return 0;
}
