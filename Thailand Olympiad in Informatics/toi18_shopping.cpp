#include<bits/stdc++.h>
using namespace std;

#define INF	1e9+7
#define ll long long
#define pii pair<int,int>

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll z;
	ll m,n;
	ll st,pt;
	cin>>m>>n;
	ll qs1[m+1];
	ll qs2[m+1];
	memset(qs1,0,sizeof(qs1));
	memset(qs2,0,sizeof(qs2));
	for(int i=1; i<=m; i++) {
		cin>>z;
		z>0?(qs1[i]=qs1[i-1]+z,qs2[i]=qs2[i-1]):(qs1[i]=qs1[i-1],qs2[i]=qs2[i-1]+abs(z));
	}
	for(int i=0; i<n; i++) {
		cin>>st>>pt;
		auto idx = lower_bound(qs2+st,qs2+m,pt+qs2[st])-qs2;
		if(st==0) {
	      cout<<qs1[idx]<<'\n';
	    }
		else {
	      cout<<qs1[idx] - qs1[st]<<'\n';
		}
	}
}
