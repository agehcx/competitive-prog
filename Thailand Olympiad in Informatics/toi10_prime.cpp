#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
const int N=1e7;
vector<bool> prime(N+1, true);
ull p[N], x, cnt=1;
int main() {
    cin >> x;
    p[0] = 2;
    prime[0] = false;
    prime[1] = false;
    for (ull i = 2; i <= N; i++) {
        if (prime[i]) {
            p[cnt++] = i;
            for (ull j = i * i; j <= N; j += i) {
                prime[j] = false;
            }
        }
    }
    cout << p[x];
}
