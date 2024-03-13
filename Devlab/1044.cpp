#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= 12; i++) {
        cout << n << " x " << i << " = " << n * i << '\n';
    }
}