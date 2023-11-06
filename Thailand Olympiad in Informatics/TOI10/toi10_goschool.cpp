#include <bits/stdc++.h>
using namespace std;

vector<vector<long long>> dp(60, vector<long long>(60, 0));
vector<vector<bool>> chk(60, vector<bool>(60, false));

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M, Q; cin >> M >> N >> Q;
    for (int i = 0; i < Q; i++) {
        int u, v; cin >> u >> v;
        chk[v][u] = true;
    }
    dp[1][1] = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            if (chk[i][j]) continue;
            dp[i][j] += dp[i - 1][j] + dp[i][j - 1];
        }
    }
    cout << dp[N][M];
}