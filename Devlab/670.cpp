#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<string> s;
    string str, tmp;
    getline(cin, str);
    str = str.substr(1, str.size() - 2) + ',';
    int cnt = count(str.begin(), str.end(), ',');
    istringstream iss(str);
    while (iss >> tmp) s.insert(tmp);
    cout << (s.size() == cnt ? "False" : "True");
}