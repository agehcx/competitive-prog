#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    getline(cin, str);
    string A[3];
    A[0] = str.substr(0, str.find('B'));
    A[1] = str.substr(str.find('B'), str.find('C') - str.find('B'));
    A[2] = str.substr(str.find('C'));
    set<string> s[3];
    char m; int mx = 0;
    for (int i = 0; i < 3; i++) {
        istringstream iss(A[i]);
        string tmp;
        while (iss >> tmp) {
            s[i].insert(tmp);
        }
        mx = max(mx, int(s[i].size()));
        if (s[i].size() == mx) m = i + 'A';
    }
    cout << m;
}