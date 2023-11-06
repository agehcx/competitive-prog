#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double a; string b;
    cin >> a >> b;
    if (a > 0 && b == "A") cout << a << "A = " << a * 1000 << "mA";
    else if (a > 0 && b == "mA") cout << a << "mA = " << a / 1000.0 << "A";
    else if (a < 0) cout << "Error because the numerical value you entered is invalid.";
    else cout << "Error because the unit you entered is invalid.";
}