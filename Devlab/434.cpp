#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double a, b; cin >> a >> b;
    double c = sqrt(a * a + b * b);
    if (int(c) == c) cout << int(c);
    else cout << fixed << setprecision(2) << c;
}