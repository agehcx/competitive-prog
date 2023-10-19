#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    getline(cin, a);
    getline(cin, b);
    if (a.size() == b.size()) cout << "no surplus";
    else {
        if (a.size() > b.size()) cout << a.substr(b.size()) << " = " << a.size() - b.size();
        else cout << b.substr(a.size()) << " = " << b.size() - a.size();
    }
}