#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    int cnt = 0;
    string A, B, sc[5];
    while (cin >> s) {
        if (s == "*") break;
        else {
            if (cnt == 0) A = s;
            else if (cnt == 1) B = s;
            else {
                sc[cnt - 2] = s;
            }
        }
        cnt++;
    }
    int taa[5] = {0};
    int tab[5] = {0};
    string memo = "";
    bool chk = true;
    for (int i = 0; i < 5; i++) {
        chk = true;
        memo = "";
        string tsc = sc[i];
        tsc += ' ';
        for (int j = 0; j < tsc.size(); j++) {
            if (tsc[j] >= '0' && tsc[j] <= '9') {
                memo += tsc[j];
            } else {
                if (chk) {
                    if (memo != "") taa[i] = stoi(memo);
                    chk = false;
                } else {
                    if (memo != "") tab[i] = stoi(memo);
                }
                memo = "";
            }
        }
    }
    int scA = 0;
    int scB = 0;
    for (int i = 0; i < 5; i++) {
        if (taa[i] > tab[i]) scA++;
        else if (tab[i] > taa[i]) scB++;
    }
    if (scA > scB) cout << '*';
    cout << A << ' ' << scA << " [ ";
    for (int i = 0; i < 5; i++) {
        if (taa[i] != 0) cout << taa[i] << ' ';
    }
    cout << "]\n";
    if (scB > scA) cout << '*';
    cout << B << ' ' << scB << " [ ";
    for (int i = 0; i < 5; i++) {
        if (tab[i] != 0) cout << tab[i] << ' ';
    }
    cout << "]\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int Q; cin >> Q;
    while (Q--) {
        solve();
    }

}