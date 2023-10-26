#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str; cin >> str;
    int cnt = 1;
    for (auto c : str) {
        if (islower(char(c - cnt))) cout << char(toupper(char(c - cnt)));
        else cout << char(tolower(char(c - cnt)));
        cnt++;
    }
}