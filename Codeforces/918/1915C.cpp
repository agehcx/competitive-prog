#include <bits/stdc++.h>
using namespace std;

void solve(int testCase) {
    int n; cin >> n;
    long long s = 0;
    while (n--) {
        long long x; cin >> x;
        s += x;
    }
    long long sq = sqrt(s);
    if (sq * sq == s) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q; cin >> Q;
    while (Q--) solve(Q);
}