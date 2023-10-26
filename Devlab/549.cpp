#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b; cin >> a >> b;
    int total = a / b;
    int coupon = a / b;
    int plate = a / b;
    while (true) {
        if (coupon < 2 && plate < 4) break;
        if (coupon > 1) {
            total += coupon / 2;
            plate += coupon / 2;
            coupon = coupon / 2 + coupon % 2;
        }
        if (plate > 3) {
            total += plate / 4;
            coupon += plate / 4;
            plate = plate / 4 + plate % 4;
        }
    }
    cout << total;

}