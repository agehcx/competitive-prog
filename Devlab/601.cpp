#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    cin >> str;
    map<string, string> mp;
    mp["Fire"] = "00000000000000000000";
    mp["Water"] = "00000000000000000001";
    mp["Wind"] = "00000000000000000010";
    mp["Ground"] = "00000000000000000011";
    mp["Light"] = "00000000000000000100";
    mp["Dark"] = "00000000000000000101";
    if (mp.find(str) != mp.end()) {
        cout << mp[str];
    } else {
        cout << "No have this mahou in your library.";
    }
}