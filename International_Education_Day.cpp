#include <bits/stdc++.h>
using namespace std;


int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int chefSales = A * C;
    int chefinaSales = B * C;

    cout << (chefSales > chefinaSales ? chefSales : chefinaSales) << endl;

    return 0;
}
