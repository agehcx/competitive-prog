#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

const int MXN = 50;
ull dp[MXN][MXN];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    dp[0][0] = 1;
    for(int i=1; i<MXN; i++) {
    for(int j=0; j<i; j++) {
        dp[i][j] = dp[i-1][j] + dp[i-1][j-1];  
    }}
	int N; cin>>N;
    int cx = N; int cy = 0;
    for(int i=0; i<N+1; i++) {
      	if(dp[N+1][i]!=1) cout<<dp[N+1][i];
      	if(cx!=0) { cout<<'x';
        	if(cx!=1) cout<<'^'<<cx;
      	}
      	if(cy!=0) { cout<<'y';
        	if(cy!=1) cout<<'^'<<cy;
      	}        
      	cx--;cy++;
      	if(i!=N)cout<<" + ";
    }
}
