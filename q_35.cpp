#include <iostream>
#include <string>
using namespace std;

class Laptop {
private:
    string name;
    float price;
    string processor;

public:
    Laptop(string n, float p, string proc) {
        name = n;
        price = p;
        processor = proc;
    }

    void display() {
        cout << "Laptop Name: " << name << endl;
        cout << "Price: $" << price << endl;
        cout << "Processor: " << processor << endl;
    }
};

int main() {
    Laptop l1("Dell Inspiron", 750.50, "Intel i5");
    Laptop l2("HP Pavilion", 820.75, "AMD Ryzen 5");

    cout << "Laptop 1 Details:" << endl;
    l1.display();

    cout << "\nLaptop 2 Details:" << endl;
    l2.display();

    return 0;
}
