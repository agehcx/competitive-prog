#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int
ull path[52][52];
ull dp[52][52];

ull rec(int a, int b) {
	if(a*b==1) {
		return 1;
	}
	if(path[a][b]^1==0 || a <= 0 || b <= 0)  {
		return 0;
	}	
	if(dp[a][b]!=0) {
		return dp[a][b];
	}
	return dp[a][b] = rec(a-1,b) + rec(a,b-1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ull y,x,z,i,j;
	cin>>y>>x>>z;
	memset(path,0,sizeof(path));
	memset(dp,0,sizeof(dp));
	for(int _=0;_<z;_++){
		cin>>j>>i;
		path[i][j]=1; 
	}
	cout<<rec(x,y);
}
