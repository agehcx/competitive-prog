#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str; cin >> str;
    char prev;
    str += ' ';
    int cnt = 1;
    bool chk = true;
    for (auto it : str) {
        if (it == prev) cnt++;
        else cnt = 1;
        if (cnt == 4) chk = false;
        prev = it;
    }
    cout << (chk ? "Correct" : "Not Correct");
}