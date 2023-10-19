#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double x; cin >> x;
    if (x == -1) cout << "Error";
    else cout << fixed << setprecision(2) << (12 * x * x - 6) / (2 * x + 2);
    
    // x => t^2 + 2t
    // y => 4t^3 - 6t

    // dx/dt = 2t + 2
    // dy/dt = 12t^2 - 6

    // dy/dx = (12t^2 - 6) / (2t +2)
}