#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string empName, int empID) {
        name = empName;
        employeeID = empID;
        salary = 0;
    }

    void setSalaryBasedOnPerformance(char performanceGrade) {
        if (performanceGrade == 'A') {
            salary = 100000;
        } else if (performanceGrade == 'B') {
            salary = 75000;
        } else if (performanceGrade == 'C') {
            salary = 50000;
        } else if (performanceGrade == 'D') {
            salary = 30000;
        } else {
            cout << "Invalid performance grade" << endl;
        }
    }

    void displayEmployeeDetails() {
        cout << "\nEmployee ID: " << employeeID << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    string name;
    int employeeID;
    char performanceGrade;

    cout << "Enter employee name: ";
    cin >> name;

    cout << "Enter employee ID: ";
    cin >> employeeID;

    Employee emp(name, employeeID);

    cout << "Enter performance grade (A, B, C, D): ";
    cin >> performanceGrade;

    emp.setSalaryBasedOnPerformance(performanceGrade);
    emp.displayEmployeeDetails();

    return 0;
}
