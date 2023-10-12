#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int i = 0;

    for (int T = 0; T < a; T++) {
        int t, b;
        cin >> t >> b;
        if (b >= t + 2) {
            i++;
        }
    }

    cout << i << endl;

    return 0;
}

