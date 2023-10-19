#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a[3];
    set<string> s = {"Red", "Yellow", "Blue", "White"};
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
        if (s.find(a[i]) == s.end()) {
            cout << "ERROR";
            return 0;
        }
    }
    bool red = false;
    int cb = 0;
    for (int i = 0; i < 3; i++) {
        if (a[i] == "Red") red = true;
        if (a[i] == "Blue") cb++;
    }
    if (!red) {
        cout << "Second Line";
    } else {
        if (a[2] == "White") cout << "Third Line";
        else {
            if (cb > 1) cout << "First Line";
            else cout << "Third Line";
        }
    }
}