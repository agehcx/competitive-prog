#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    string str;  cin >> str;
    cout << fixed << setprecision(2) << double(N) * (str[1] - '0') / 4.0;
}