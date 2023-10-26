#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str; cin >> str;
    int sz = str.size();
    unsigned long long res = 0;
    for (int i = 0; i < sz; i++) {
        long long ans = str[i];
        ans = (ans % 9 == 0 ? 9 : ans % 9);
        long long tmp = ans;
        for (int j = 0; j < sz - 1; j++) {
            tmp = tmp * ans;
            tmp = (tmp % 9 == 0 ? 9 : tmp % 9);
        }
        res += tmp;
        res = (res % 9 == 0 ? 9 : res % 9);
    }
    cout << (res % 9 == 0 ? "9" : to_string(res % 9));
}