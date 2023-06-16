/*
 * Algo : Math, Math, Math, Math
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;

int pc[990][990];
int dp[999];

void bino() {
	pc[0][0] = 1;
	for(int i=1; i<=987; i++) {
		for(int j=0; j<=i; j++) {
			pc[i][j] = pc[i-1][j] + pc[i-1][j-1];
		}
	}
}

void precomp() {
	dp[1] = 1;
    for(int i=2; i<=987; i++) {
        // compute (i+j*654+321)^abs(i-j)
    }
}

int exp(int x, int p) {
	for(int i=0; i<p; i++) {
		x = (x*x)%MOD;
	}
	return x;
}

ll binpow(ll x, ll p) {
    ll res = 1;
    x = x%p;
    while(p>0) {
        if(p&1) res = (res*x)%MOD;
        p = p>>1;
        x = (x*x)%MOD;
    }
    return res;
}

void solve() {
	int L,R,ans,idx,mn = INT_MAX; cin>>L>>R;
	if(L==R) cout<<L<<'\n';
	else {
		for(int i=L; i<=R; i++) {
			for(int j=1; j<=987; j++) {
//				ans = calc(i);
			}
			if(ans < mn) idx = i;
		}
		cout<<idx<<'\n';
	}
}

int main() {
	sync_with_stdio(false);
    cin.tie(nullptr);
    bino();
    precomp();
    int N; cin>>N;
    while(N--) solve();
}
