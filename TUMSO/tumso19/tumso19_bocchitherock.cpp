#include<bits/stdc++.h>
using namespace std;
#define INF 	1e18+7
#define ll 	long long int
#define pii	pair<int,int>
#define pll 	pair<ll,ll>
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int m,n;
	cin>>m>>n;
	vector<pll> v[m+1];
	ll dist[m+1];
	bool vis[m+1];
	for(int i=0; i<n; i++) {
		int u,w,x;
		cin>>u>>w>>x;
		v[u].push_back({w,x});
		v[w].push_back({u,x});
	}
	int ap;
	cin>>ap;
	for(int i=0; i<ap; i++) {
		int w,x;
		cin>>w>>x;
		v[m].push_back({w,x});
		v[w].push_back({m,x});
	}
	for(int i=0; i<m+1; i++) {
		dist[i] = INF;
		vis[i] = false;
	}
	priority_queue<pll,vector<pll>,greater<pll>> pq;
	dist[m] = 0;
	pq.push({0,m});
	while(!pq.empty()) {
		int f = pq.top().second;
		int s = pq.top().first;
		pq.pop();
		if(vis[f]) continue;
		vis[f] = true;
		for(auto &e : v[f]) {
			int i = e.first;
			int j = e.second;	
			if(s+j < dist[i]) {
				dist[i] = s+j;
				pq.push({s+j,i});
			}
		}
	}
	cout<<dist[0];
} 
