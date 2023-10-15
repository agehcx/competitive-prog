#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string x; cin >> x;
    int sz = x.size();
    vector<int> v(sz, 0);
    for (auto& e : v) {
        cin >> e;
        e = e % 26;
    }
    vector<int> cc(26, 0);
    int mxn = 0;
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            cc[j] = 0;
        }   
        for (int j = 0; j < sz; j++) {
            cc[(x[j] - 'A' + i * v[j]) % 26]++;
        }
        for (int j = 0; j < 26; j++) {
            mxn = max(cc[j], mxn);
        }
    }
    cout << mxn;
}