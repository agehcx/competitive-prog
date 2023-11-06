#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double x; cin >> x;
    double res = 10;
    double p = pow(2, (int)(floor(x - 1)));
    res *= p;
    if (x != int(x)) res = res * 1.5;
    if (x != 0) cout << res;
    else cout << 0;
}