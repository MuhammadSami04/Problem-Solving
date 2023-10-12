#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    for (int test = 0; test < t; test++) {
        int i = 2, sum = 0;
        cin >> n;

        while (n != 1) {
            if (n % i == 0) {
                n /= i;
                sum += i;
            }
            else {
                i++;
            }
        }

        cout << sum << endl;
    }

    return 0;
}

