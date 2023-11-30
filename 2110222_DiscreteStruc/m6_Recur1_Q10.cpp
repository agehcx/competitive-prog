#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int dp[9] = {0};
    dp[0] = 0;
    dp[1] = 3;
    for (int i = 2; i < 9; i++) {
        dp[i] = 2 * dp[i - 1] + 1 * dp[i - 2];
    }
    cout << dp[8];
}