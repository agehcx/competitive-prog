#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double a, b, total, disc;
    char x;
    cin >> a >> b >> x;
    if (x == 'x') {
        total = a * b;
        cout << fixed << setprecision(2) <<  "Total " << total << '\n';
        cout << "Discount ";
        if (a * b > 1000) disc = 0.20 * a * b;
        else if (a * b > 500) disc = 0.15 * a * b;
        else disc = 0.10 * a * b;
        cout << fixed << setprecision(2) << disc << '\n';
        cout << "Amount " << fixed << setprecision(2) << total - disc;
    } else {
        total = a * b;
        cout << "Total " << fixed << setprecision(2) << total << '\n';
        cout << "Discount ";
        if (a * b > 1000) disc = 0.15 * a * b;
        else if (a * b > 500) disc = 0.10 * a * b;
        else disc = 0.05 * a * b;
        cout << fixed << setprecision(2) << disc << '\n';
        cout << "Amount " << fixed << setprecision(2) << total - disc;
    }
}