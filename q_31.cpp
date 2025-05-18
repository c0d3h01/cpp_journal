#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

    bool isLeapYear(int y) {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

public:
    Date() : day(1), month(1), year(2000) {}

    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void getDate() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    bool isValidDate() {
        if (year < 1 || month < 1 || month > 12 || day < 1)
            return false;

        int daysInMonth[] = { 31, 28, 31, 30, 31, 30,
                              31, 31, 30, 31, 30, 31 };

        if (isLeapYear(year))
            daysInMonth[1] = 29;

        return day <= daysInMonth[month - 1];
    }
};

int main() {
    Date d;
    int day, month, year;

    cout << "Enter day: ";
    cin >> day;

    cout << "Enter month: ";
    cin >> month;

    cout << "Enter year: ";
    cin >> year;

    d.setDate(day, month, year);

    if (d.isValidDate()) {
        cout << "Valid date entered." << endl;
        d.getDate();
    } else {
        cout << "Invalid date entered." << endl;
    }

    return 0;
}
