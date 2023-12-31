#include <bits/stdc++.h>
using namespace std;

void solve(int testCase) {
    int m[3] = {0};
    for (int i = 0; i < 3; i++) {
        string str; cin >> str;
        for (char c : str) {
            if (c != '?') {
                m[c - 'A']++;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        if (m[i] == 2) cout << char(i + 'A') << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int Q; cin >> Q;
    while(Q--) solve(Q);
}