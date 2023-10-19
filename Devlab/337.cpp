#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    int cnt = 0;
    for (int i = 1; i < INT_MAX; i++) {
        int tmp = i;
        if (cnt == N) {
            cout << i - 1; break;
        }
        for (int j = 2; j <= 19; j++) {
            if (tmp % j == 0) {
                if (!(j == 3 || j == 11 || j == 19)) {
                    if (!(j % 3 == 0 || j % 11 == 0 || j % 19 == 0)) break;
                }
                else {
                    while (tmp % j == 0) tmp /= j;
                }
            }
            if (tmp == 1) {
                cnt++;
                break;
            }
        }
    }
}