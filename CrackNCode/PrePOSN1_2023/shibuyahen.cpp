#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    int cnt = 0;
    for (int i = 1; i < 2 * N; i++) {
        for (int j = 1; j < 2 * N; j++) {
            (j == 1 || j == 2 * N - 1) ? cout << '#' : (i == j && i > 1 && i < 2 * N - 1) ? cout << '#': cout << " ";
        }
        cout << '\n';
    }
}