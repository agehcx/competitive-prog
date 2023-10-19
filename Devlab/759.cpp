#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, cnt = 0;
    cin >> a >> b >> c;
    if (b >= a) {
        cout << "Error";
        return 0;
    }
    while (c > 0) {
        c -= a;
        cnt++;
        if (c <= 0) break;
        c += b;
    }
    cout << cnt;
}