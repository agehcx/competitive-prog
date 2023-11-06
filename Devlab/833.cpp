#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double N; cin >> N;
    double res = N * N / 8;
    if (res == (int)(res)) cout << (int)res;
    else cout << fixed << setprecision(2) << res;
}