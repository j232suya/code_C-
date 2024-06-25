#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> count(10, 0);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        count[A[i]]++;
    }

    for (int i = 0; i < 10; i++) {
        cout << i << ": " << count[i] << endl;
    }

    return 0;
}
