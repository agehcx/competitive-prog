#include <bits/stdc++.h>
using namespace std;

void solve(int testCase) {
    int x; cin >> x;

    if (x % 3 == 0) cout << "Second";
    else cout << "First";

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int Q; cin >> Q;
    while(Q--) solve(Q);
}