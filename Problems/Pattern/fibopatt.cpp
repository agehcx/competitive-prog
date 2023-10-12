/* Pattern - Bangmod Hackathon 2023 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int N; cin>>N;
	int nmsz, fib[N+1], dp[2*N][2*N]; fib[0] = fib[1] = 1;
	for(int i=2; i<=N; i++) fib[i] = fib[i-1] + fib[i-2];
	const int udsz = (floor(log10(fib[N])+1));
	memset(dp,0,sizeof(dp));
	for(int i=0; i<N; i++) {
		for(int j=0; j<=i; j++) dp[i][(N-i-1)+j] = fib[j];
		for(int j=0; j<=i; j++) dp[i][N+j-1] = fib[i-j];
	}
	for(int i=0; i<N; i++) {
		for(int j=0; j<(N-i); j++) dp[N+i-1][i+j] = fib[j];
		for(int j=0; j<(N-i); j++) dp[N+i-1][N+j-1] = fib[N-i-j-1];
	}
	for(int i=0; i<2*N-1; i++) {
		for(int j=0; j<2*N-1; j++) {
			if(dp[i][j]!=0) nmsz = (floor(log10(dp[i][j])+1));
			else nmsz = 1;
			for(int k=0; k<=udsz-nmsz; k++) cout<<'_';
			if(dp[i][j]==0) cout<<'_';
			else cout<<dp[i][j];
		}
		cout<<'\n';
	}
}
