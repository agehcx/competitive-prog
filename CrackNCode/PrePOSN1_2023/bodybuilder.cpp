#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> sizes(N + 1);
    vector<int> weights(N + 1);
    for (int i = 1; i <= N; ++i) {
        cin >> sizes[i] >> weights[i];
    }

    vector<int> choices(M + 1);
    for (int i = 1; i <= M; ++i) {
        cin >> choices[i];
    }

    vector<vector<vector<int>>> dp(M + 1, vector<vector<int>>(N + 1, vector<int>(M + 1, 0)));
    for (int i = 1; i <= M; ++i) {
        for (int j = 1; j <= N; ++j) {
            for (int k = 1; k <= M; ++k) {
                dp[i][j][k] = dp[i][j][k - 1];
                if (choices[k] >= sizes[j] && k >= weights[j]) {
                    dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j - 1][k - weights[j]] + 1);
                }
            }
        }
    }

    for (int i = 1; i <= M; ++i) {
        cout << dp[M][N][i] << " ";
    }
    cout << endl;

    return 0;
}
