#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double t, res;
    cin >> t;
    res = (9.8 * t * t) / 8.0;
    cout << fixed << setprecision(2) << res;

}