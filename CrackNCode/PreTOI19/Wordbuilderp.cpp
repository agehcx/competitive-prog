#include<bits/stdc++.h>
using namespace std;

#define INF 1e9+7
#define pii	pair<int,int>

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m,k;
	cin>>n>>m>>k;
	long long dist[n];
	bool vis[n];
	vector<pii> v[n];
	vector<long long> fin[26];
	int cc[27];
	for(int i=0; i<n; i++) dist[i]= INF, vis[i]=false;
	memset(cc,0,sizeof(cc));
	string base,targ;
	cin>>base;
	int i,x,y;
	for(i=0; i<n; i++) cc[base[i]-'A']++;
	for(i=0; i<m; i++) {	
		cin>>x>>y;
		v[x-1].push_back({1,y-1});
		v[y-1].push_back({1,x-1});
	}
	cin>>targ;
	for(i=0; i<k; i++) {
		cc[targ[i]-'A']--;
		if(cc[targ[i]-'A']<0) {
			cout<<"-1";
			return 0;
		}
	}
	priority_queue<pair<int,long long>,vector<pair<int,long long>>,greater<pair<int,long long>>> pq;
	pq.push({0,0});
	dist[0] = 0;
	int t,g;
	long long d,vl;
	while(!pq.empty()) {
		t = pq.top().second;
		d = pq.top().first;
		pq.pop();
		if(vis[t]) continue;
		vis[t] = true;
		for(auto e : v[t]) {
			g = e.second;
			if (dist[g] > d+e.first) {
				dist[g] = d+e.first;
				pq.push({dist[g],g});
			}
		}
	}
	for(i=0; i<n; i++) {
		fin[base[i]-'A'].push_back(dist[i]);
	}
	for(i=0; i<26; i++) {
		if(fin[i].size()>0) {
			sort(fin[i].begin(),fin[i].end());
		}
	}
	long long ans = 0;
	for(i=0; i<k; i++) {
		if(!fin[targ[i]-'A'].empty()) {
			ans += fin[targ[i]-'A'].front();
			fin[targ[i]-'A'].erase(fin[targ[i]-'A'].begin());
		}
	}
	cout<<2*ans;
}

/*
7 10 5
AAAAAAA
1 5
5 3
6 2
2 4
5 2
4 3
7 6
2 1
4 7
2 3
AAAAA
*/
