#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string className;
    int rollNumber;
    float marks;
    char grade;

    void calculateGrade() {
        if (marks >= 90)
            grade = 'A';
        else if (marks >= 75)
            grade = 'B';
        else if (marks >= 60)
            grade = 'C';
        else if (marks >= 50)
            grade = 'D';
        else
            grade = 'F';
    }

public:
    void inputDetails() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter class: ";
        getline(cin, className);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter marks (out of 100): ";
        cin >> marks;
        cin.ignore(); // clear newline from buffer
        calculateGrade();
    }

    void displayDetails() {
        cout << "\nStudent Details:\n";
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student s1;
    s1.inputDetails();
    s1.displayDetails();
    return 0;
}
