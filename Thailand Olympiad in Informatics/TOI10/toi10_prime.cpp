#include <bits/stdc++.h>
using namespace std;

const int N=8e6;
vector<bool> prime(N+1, false);
int p[N], x, cnt = 1;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> x;
    for (int i = 2; i <= N; i++) {
        if (prime[i] == false) {
            if (--x == 0) {
                cout << i;
                return 0;
            }
            p[cnt++] = i;
            for (long long j = (long long)(i) * (long long)(i); j <= N; j += (long long)(i)) prime[j] = true;
        }
    } 
}
