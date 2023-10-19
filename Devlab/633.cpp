#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str; cin >> str;
    int sz = str.size();
    if (str[sz - 1] == 'y') cout << str << " -> " << str.substr(0, sz - 1) << "ies";
    else if (str[sz - 1] == 's') cout << str << " -> " << str.substr(0, sz - 1) << "es";
    else if (str.substr(sz - 2) == "sh" || str.substr(sz - 2) == "ch" || str[sz - 1] == 'x') cout << str << " -> " << str << "es";
    else cout << str << " -> " << str + 's';
}