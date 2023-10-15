#include<bits/stdc++.h>
using namespace std;
#define INF 	1e9+7
#define ll 		long long int
#define pii		pair<ll,ll>
bool isGreen(int ct, int lt) {
	return ((ct/lt)%2)==0;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int m,n;
	cin>>m>>n;
	vector<pair<int,pair<int,int>>> v[m];
	ll ft[m];
	int x,y,d,t;
	for(int i=0; i<n; i++) {
		cin>>x>>y>>d>>t;
		v[x-1].push_back({y-1,{d,t}});
		v[y-1].push_back({x-1,{d,t}});
	}
	for(int i=0; i<m; i++) {
		ft[i] = INF;
	}
	priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
	pq.push({0,{0,0}});
	ft[0] = 0;
	ll curtime = 0;
	int i,qd,qt,tw,dl,rt,cw;
	double ld;
	while(!pq.empty()) {
		int f = pq.top().first;
		pq.pop();
		for(auto &e : v[f]) {
			i = e.first;
			qd = e.second.first;
			qt = e.second.second;
			tw = 0;
			dl = qd;
			rt = 0;
			cw = 0;
			curtime = ft[f];
			if(f==0) {
				ld = ((double)dl)/((double)qt);
				if(ld<=1) {
					rt += dl;
				}
				else {
					rt = 2*(dl/qt)*qt + dl%qt;
				}
				curtime += rt;
			}
			else {
				if((!isGreen(curtime,qt)) ) {
					tw = (((curtime/qt)+1)*qt) - curtime;
					ld = ((double)dl)/((double)qt);
					if(ld<=1) {
						rt = dl;
					}
					else {
						rt = 2*(dl/qt)*qt;
						if(dl%qt!=0) {
							rt += dl%qt;
						}
					}
					curtime += tw+rt;
				}
				else if(isGreen(curtime,qt)) {
					cw=qt-(curtime%qt);
					if(dl-cw >0) {
						curtime += cw;
						dl = dl - cw;
						curtime += qt;

						if((dl/qt)%2==0 && dl%qt==0) {
							rt = 2*(dl/qt)*qt - qt;
						}
						else {
							rt = 2*(dl/qt)*qt + dl%qt;
						}
						curtime += rt;
					}
					else {
						curtime += dl;
						dl = 0;
					}	
				}
			}
			if(curtime < ft[i]) {
				ft[i] = curtime;
				pq.push(e);	
			}			
		}
	}
	cout<<ft[m-1];
}
