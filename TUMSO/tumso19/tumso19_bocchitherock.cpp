#include<bits/stdc++.h>
using namespace std;
#define INF 	1e18+7
#define ll 		long long int
#define pii		pair<ll,ll>
#define pll 	pair<ll,ll>

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int m,n;
	cin>>m>>n;
	vector<pii> v[m+1];
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
	}
  
	priority_queue<pii,vector<pii>,greater<pii>> pq;
	dist[m] = 0;
	pq.push({m,0});
  
	while(!pq.empty()) {
		int f = pq.top().first;
		int s = pq.top().second;
		pq.pop();
		for(auto &e : v[f]) {
			int i = e.first;
			int j = e.second;
			if(s+j < dist[i]) {
				dist[i] = s+j;
				pq.push({i,s+j});
			}
		}
	}
  
	cout<<dist[0];
} 
