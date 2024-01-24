#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int j = 0; j < t; ++j) {
        int p;
        cin >> p;

        int a = 0;
        int b = 0;
        int c = 0;

        for (int i = 29; i >= 0; --i) {
            if ((p >> i) & 1) {
                if (c) {
                    a -= (1 << i);
                    b += (1 << i);
                } else {
                    a += (1 << i);
                    c = 1;
                }
            }
        }

        cout << b << " " << a + b << endl;
    }

    return 0;
}