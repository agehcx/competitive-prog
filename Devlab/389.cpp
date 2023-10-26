#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, P; cin >> N >> P;
    int total = 0;
    for (int i = 0; i < N; i++) {
        double x; cin >> x;
        total += int(ceil(x * (100.0 + P * 1.0) / 100.0));
    }
    cout << total;
}