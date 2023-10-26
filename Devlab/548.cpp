#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str, splitter;
    getline(cin, str);
    getline(cin, splitter);
    int prev = 0;
    int init = 0;
    while (str.find(splitter, init) != string::npos) {
        cout << str.substr(init, str.find(splitter, prev) - init + splitter.size()) << '\n';
        init = str.find(splitter, prev);
        prev = str.find(splitter, prev) + 1;
    }
}