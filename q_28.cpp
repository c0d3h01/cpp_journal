#include <iostream>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    void setCompany(const string &c) {
        company = c;
    }

    string getCompany() const {
        return company;
    }

    void setModel(const string &m) {
        model = m;
    }

    string getModel() const {
        return model;
    }

    void setYear(int y) {
        year = y;
    }

    int getYear() const {
        return year;
    }
};

int main() {
    Car myCar;
    myCar.setCompany("Toyota");
    myCar.setModel("Corolla");
    myCar.setYear(2020);

    cout << "Car Details:" << endl;
    cout << "Company: " << myCar.getCompany() << endl;
    cout << "Model: " << myCar.getModel() << endl;
    cout << "Year: " << myCar.getYear() << endl;

    return 0;
}
