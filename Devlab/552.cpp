#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double s, y;
    cin >> s >> y;
    double f = 1 / s + 1 / y;
    double fin = 1 / f;
    cout << fixed << setprecision(2) << fin << " cm\n";
    cout << (f > 0 ? "เลนส์นูน" : "เลนส์เว้า");
}