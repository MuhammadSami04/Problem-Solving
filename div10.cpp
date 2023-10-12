#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;

        if (n % 5 == 0) {
            int op = 0;
            while (n % 10 != 0) {
                n *= 2;
                op++;
            }
            cout << op << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}

