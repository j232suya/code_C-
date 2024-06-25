#include <iostream>
#include <algorithm>
#include <climits> // LLONG_MAX を使用するために必要
using namespace std;

int main() {
    long long H, W;
    cin >> H >> W;

    // 初期値として大きな値を設定
    long long min_area = LLONG_MAX;

    // 縦に切った場合
    for (int i = 1; i <= W / 2; ++i) {
        long long area1 = H * i;
        long long area2 = H * (W - i);
        min_area = min(min_area, min(area1, area2));
    }

    // 横に切った場合
    for (int i = 1; i <= H / 2; ++i) {
        long long area1 = W * i;
        long long area2 = W * (H - i);
        min_area = min(min_area, min(area1, area2));
    }

    cout << min_area << endl;
    return 0;
}
