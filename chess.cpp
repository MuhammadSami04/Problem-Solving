#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int l,b ;
        cin >> l >> b;
        cout << (l * b) / 2 << endl;
    }

    return 0;
}

