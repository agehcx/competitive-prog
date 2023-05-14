#include <bits/stdc++.h>
using namespace std;

#define INF 1e9+7
#define pii pair<int,int>

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m,k;
	cin>>n>>m>>k;
	int dist[n];
	int cc[26];
	bool vis[n];
	vector<int> v[n];
	int i,x,y;
	for(i=0; i<n; i++) dist[i]= INF, vis[i]=false;
	for(i=0; i<26; i++) cc[i]=0;
	string base,targ;
	cin>>base;
	for(i=0; i<n; i++) cc[base[i]-'A']++;
	for(i=0; i<m; i++) {	
		cin>>x>>y;
		v[x-1].push_back(y-1);
		v[y-1].push_back(x-1);
	}
	cin>>targ;
	for(i=0; i<k; i++) {
		cc[targ[i]-'A']--;
		if(cc[targ[i]-'A']<0) {
			cout<<"-1";
			return 0;
		}
	}
	priority_queue<pii,vector<pii>,greater<pii>> pq;
	priority_queue<int,vector<int>,greater<int>> qq[26];
	pq.push({0,0});
	dist[0] = 0;
	int t,g;
	int d,vl;
	int visc = 0;
	while(!pq.empty()) {
		t = pq.top().second;
		d = pq.top().first;
		pq.pop();
		if(vis[t]) continue;
		vis[t] = true;
		qq[base[t]-'A'].push(dist[t]);
		for(auto e : v[t]) {
			if(!vis[e] && dist[e] > d+1) {
				dist[e] = d+1;
				pq.push({dist[e],e});
			}
		}
	}
	long long ans = 0;
	for(i=0; i<k; i++) {
		if(!qq[targ[i]-'A'].empty()) {
			ans += qq[targ[i]-'A'].top();
			qq[targ[i]-'A'].pop();
		}
	}
	cout<<2*ans;
}
