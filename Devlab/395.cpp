#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str; cin >> str;
    bool chk = true;
    for (auto c : str) {
        if (isalpha(c) && c != '-') chk = false;
    }
    if (!chk) cout << "Invalid";
    else {
        int res = stoi(str);
        if (res < 0) cout << "UNDER";
        else if (res > 1000000) cout << "OVER";
        else {
            for (int i = 0; i < str.size(); i++) {
                if (i == 0 && str[i] == '0') continue;
                int mul = 1;
                for (int j = 0; j < str.size() - i - 1; j++) mul *= 10;
                cout << (str[i] - '0') * mul << '\n';
                mul /= 10;
            }
        }
    }
}