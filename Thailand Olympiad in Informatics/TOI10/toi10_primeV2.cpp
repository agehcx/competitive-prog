#include <bits/stdc++.h>
using namespace std;

const int N = 8e6;
vector<char> prime(N + 1, true);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin >> x;
    if (x == 1) {
        cout << 2;
        return 0;
    }
    x--;
    for (int i = 3; i <= N; i += 2) {
        if (prime[i]) {
            --x;
            if (x == 0) {
                cout << i;
                return 0;
            }
            for (long long j = 1LL * i * i; j <= N; j += i * 2) {
                prime[j] = false;
            }
        }
    }
}
