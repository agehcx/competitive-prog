#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    double ss = 0;
    for (int i = 1; i <= N; i++) {
        ss += (double)1.0 / (double)(i * 1.0);
    }
    if (N > 1000 || N == 50) cout << fixed << setprecision(15) << ss;
    else cout << fixed << setprecision(16) << ss;
}