#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	long long  z, m, n, st, pt; cin >> m >> n;
	long long  qs1[m + 1] = {0}, qs2[m + 1] = {0};
	for (int i = 1; i <= m; i++) {
		cin >> z;
		z > 0 ? (qs1[i] = qs1[i - 1] + z, qs2[i] = qs2[i - 1]) : (qs1[i] = qs1[i - 1], qs2[i] = qs2[i - 1] + abs(z));
	}
	for (int i = 0; i < n; i++) {
		cin >> st >> pt;
		auto idx = lower_bound(qs2 + st, qs2 + m, pt + qs2[st]) - qs2;
		if (st == 0) {
			cout << qs1[idx] << '\n';
		} else {
			cout << qs1[idx] - qs1[st] << '\n';
		}
	}
}
