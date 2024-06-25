#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int max_current = A[0];
    int max_global = A[0];

    for (int i = 1; i < N; i++) {
        max_current = max(A[i], max_current + A[i]);
        if (max_current > max_global) {
            max_global = max_current;
        }
    }

    cout << max_global << endl;

    return 0;
}
