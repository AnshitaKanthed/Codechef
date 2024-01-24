#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include <vector>

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        int N, M;
        cin >> N >> M;
        vector<int> A(N);
        for (int j = 0; j < N; ++j) {
            cin >> A[j];
        }

        int maxStates = 0;
        int currentLiterate = 0;

        for (int i = 0; i < N; ++i) {
            currentLiterate += A[i];

            if (currentLiterate >= M) {
                maxStates++;
                currentLiterate = 0;
            }
        }
        cout << maxStates << endl;
    }
    return 0;
}
