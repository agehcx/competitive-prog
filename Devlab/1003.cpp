#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    getline(cin, str);
    string reGex = "aeiou";
    for (char &c : str) {
        if (reGex.find(c) != string::npos) {
            c = char(reGex.find(c) + 49);
        }
    }
    cout << str;
}