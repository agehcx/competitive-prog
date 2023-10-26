#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N; cin >> N;
    vector<long long> vec(N, 0);
    for (auto& e : vec) cin >> e;
    cout << accumulate(vec.begin(), vec.end(), 0LL) - *min_element(vec.begin(), vec.end()) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int Q; cin >> Q;
    while (Q--) solve();
}