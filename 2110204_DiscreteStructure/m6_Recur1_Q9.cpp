#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int dp[18] = {0};
    dp[0] = 1;
    dp[1] = 2;
    for (int i = 2; i < 17; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[16];
}