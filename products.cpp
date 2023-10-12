#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        float q, p;
        cin >> q >> p;

        float result;
        if (q > 100) {
            result = q * 0.8 * p;
        } else {
            result = q * p;
        }

        cout << result << endl;
    }

    return 0;
}

