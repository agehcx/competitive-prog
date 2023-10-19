#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M; cin >> N >> M;
    map<string, string> mp;
    map<string, map<string, int>> dep;
    map<string, bool> valid;
    for (int i = 0; i < N; i++) {
        string a, b;
        cin >> a >> b;
        mp[a] = b;
        dep[b][a] = 1;
        valid[b] = true;
    }
    for (int i = 0; i < M; i++) {
        int typ;
        string x, y;
        cin >> typ >> x >> y;
        if (typ == 1) {
            valid[y] = true;
            dep[y][x] = 1;
            if (mp[x] != y) {
                dep[mp[x]][x] = 0;
            }
            mp[x] = y;
        } else {
            for (auto& it : dep[x]) {
                if (it.second == 1) {
                    dep[y][it.first] = 1;
                    mp[it.first] = y;
                }
                it.second = 0;
            }
            valid[x] = false;
            valid[y] = true;
        }
    }
    for (auto& it : dep) {
        if (valid[it.first] == true) {
            cout << it.first << ": ";
            for (auto& e : it.second) {
                if (e.second == 1) cout << e.first << ' ';
            }
            cout << '\n';
        }
    }
}