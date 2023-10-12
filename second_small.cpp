#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    if ((x <= y && x >= z) || (x <= z && x >= y)) {
        cout << x;
    }
    else if ((y <= x && y >= z) || (y <= z && y >= x)) {
        cout << y;
    }
    else {
        cout << z;
    }

    return 0;
}

