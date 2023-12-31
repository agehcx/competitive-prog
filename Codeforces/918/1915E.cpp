#include <bits/stdc++.h>
using namespace std;

void solve(int testCase) {
    int n; cin >> n;
    vector<long long> arr(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }
    unordered_map<long long, vector<int>> mp;
    mp[0].push_back(0);
    long long pf = 0;
    for (int i = 1; i <= n; ++i) {
        pf += (i & 1 ? arr[i] : -arr[i]);
        // cout << pf << ' ' << i << '\n';
        mp[pf].push_back(i);
    }

    for (auto& it : mp) {
        if (it.second.size() >= 2) {
            for (int i = 1; i < it.second.size(); ++i) {
                if (it.second[i] - it.second[i - 1] > 1) {
                    cout << "YES\n";
                    return;
                }
            }
        }
    }
    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q; cin >> Q;
    while (Q--) solve(Q);
}