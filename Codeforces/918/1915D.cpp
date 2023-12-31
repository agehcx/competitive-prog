#include <bits/stdc++.h>
using namespace std;

void solve(int testCase) {
    int n; cin >> n;
    string str; cin >> str;
    string res = "";
    for (int i = 0; i < str.size(); i++) {
        char c = str[i];
        if (c != 'a' && c != 'e') {
            res += c;
        } else {
            res += c;
            if (i + 2 < str.size()) if (str[i + 2] != 'a' && str[i + 2] != 'e') {
                res += str[i + 1];
                if (i != str.size() - 1) res += '.';
                i += 1;
            }
            else if (i != str.size() - 1) res += '.';
        }
    }
    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int Q; cin >> Q;
    while(Q--) solve(Q);
}