#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    unordered_set<int> seen;
    for (int i = 0; i < N; ++i) {
        if (seen.find(A[i]) != seen.end()) {
            cout << A[i] << endl;
            return 0;
        }
        seen.insert(A[i]);
    }

    cout << -1 << endl;
    return 0;
}
