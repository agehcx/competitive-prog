#include <bits/stdc++.h>
using namespace std;

void solve(int testCase) {
    int n; cin >> n;
    vector<long long> vec(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> vec[i];
    vector<long long> pf(n + 1, 0);
    for (int i = 1; i <= n; i++)
        pf[i] = pf[i - 1] + vec[i];
    long long mx, mn;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            long long tmp = 0;
            mx = LLONG_MIN;
            mn = LLONG_MAX;
            for (int j = 0; j < n / i; j++) {
                tmp = pf[j * i] - pf[j * i - i];
            }
            mx = max(mx, tmp);
            mn = min(mn, tmp);
        }
    }

    cout << mx - mn << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int Q; cin >> Q;
    while(Q--) solve(Q);
}