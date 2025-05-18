#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << ". New balance is: " << balance << endl;
        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdraw: " << amount << ". New balance is: " << balance << endl;
            } else {
                cout << "Insufficient funds" << endl;
            }
        } else {
            cout << "Withdraw amount must be positive!" << endl;
        }
    }

    void displayAccountDetails() {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    int accountNumber;
    double initialBalance, depositAmount, withdrawAmount;

    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    BankAccount myAccount(accountNumber, initialBalance);
    myAccount.displayAccountDetails();

    cout << "Enter deposit amount: ";
    cin >> depositAmount;
    myAccount.deposit(depositAmount);

    cout << "Enter withdrawal amount: ";
    cin >> withdrawAmount;
    myAccount.withdraw(withdrawAmount);

    myAccount.displayAccountDetails();

    return 0;
}
