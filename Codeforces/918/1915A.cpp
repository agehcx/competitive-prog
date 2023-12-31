#include <bits/stdc++.h>
using namespace std;

void solve(int testCase) {
    int a, b, c;
    int res; cin >> res;
    cin >> b;
    res ^= b;
    cin >> c;
    res ^= c;

    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int Q; cin >> Q;
    while(Q--) solve(Q);
}
