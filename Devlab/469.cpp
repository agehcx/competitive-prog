#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    int totalTax = 0;
    while (N--) {
        int x; cin >> x;
        totalTax += (x > 1000000 ? (x * 25.0) / 100.0 : x > 500000 ? (x * 20.0) / 100.0 : x > 300000 ? (x * 15.0) / 100.0 : x > 100000 ? (x * 10.0) / 100.0 : 0);
    }
    if (totalTax) cout << "เสียภาษีทั้งหมด " << totalTax << " กะลา";
    else cout << "ไม่ต้องเสียภาษี";
}