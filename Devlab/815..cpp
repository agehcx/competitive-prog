#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double x; cin >> x;
    double res = M_PI * x * x;
    cout << fixed << setprecision(2) << round(res * 100) / 100.0;
}