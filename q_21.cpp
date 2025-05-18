#include <iostream>
using namespace std;

class mainasfriend {
    int a, b;
public:
    mainasfriend(int x, int y) {
        a = x;
        b = y;
    }

    friend int main();
};

int main() {
    mainasfriend ob(5, 7);
    cout << ob.a + ob.b;
    return 0;
}
