#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int P, L;
        cin >> P >> L;

        double literacyRate = static_cast<double>(L) / P * 100;
        if (literacyRate >= 75) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
