#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    int H = 0, V = 0, cs = 0;
    char prev;
    N = N - 1;
    string str; cin >> str;
    prev = str[0];
    cs = str[1] - '0';
    while (N--) {
        cin >> str;
        if (prev == str[0]) cs += str[1] - '0';
        else {
            if (prev == 'H') H = max(H, cs);
            else V = max(V, cs);
            cs = str[1] - '0';
            prev = str[0];
        }
    }
    if (prev == 'H') H = max(H, cs);
    else V = max(V, cs);
    if (H > V) cout << H << "\nHome";
    else cout << V << "\nVisitor";
}