#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n; cin >> m >> n;
    int ss = 0;
    for (int a = 0; a <= m; a++) {
        for (int b = 0; b <= m; b++) {
            for (int c = 0; c <= m; c++) {
                for (int d = 0; d <= n; d++) {
                    for (int e = 0; e <= n; e++) {
                        for (int f = 0; f <= n; f++) {
                            ss += abs(a * e + b * f + c * d - b * d - e * c - f * a);
                        }
                    }
                }
            }
        }
    }
    cout << ss / 6;
    

}