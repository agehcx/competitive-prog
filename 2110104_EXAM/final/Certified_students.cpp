#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    map<int, vector<string>> mp;
    map<string, int> mp2;
    for (int i = 0; i < N; i++) {
        string a; int sc;
        cin >> a >> sc;
        mp2[a] = max(sc, mp2[a]);
    }
    for (auto& it : mp2) {
        mp[it.second].push_back(it.first);
    }
    int tN, cnt = 0; cin >> tN;
    for (int i = 100; i >= 0; i--) {
        if (mp[i].size() != 0) {
            if (cnt == tN) break;
            cnt++;
            cout << i << ' ';
            vector<string> tmp = mp[i];
            sort(tmp.begin(), tmp.end());
            for (int j = 0; j < tmp.size(); j++) {
                cout << tmp[j] << ' ';
            }
            cout << '\n';
        }
    }
}