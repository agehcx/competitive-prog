// https://www.borntodev.com/devlab/task/917 //

#include<bits/stdc++.h>
using namespace std;

#define INF 	1e9+7
#define ll 	long long
#define pii	pair<int,int>

int bt[15] = {};
int light[15] = {};

bool isGreen(int ct, int idx) {
	if(light[idx]==0) return 1;
	return ((ct/light[idx])%2)==0;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int M,N,TS;
    int P,Q,R;
    cin>>M>>N;
    vector<pii> V[M+1];
    for(int i=1; i<=M; i++) {cin>>light[i]; bt[i] = INF;}
    for(int i=1; i<=N; i++) {cin>>P>>Q>>R;V[P].push_back({Q,R});V[Q].push_back({P,R});}
    cin>>TS;
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    bt[1] = 0;
    pq.push({1,0});
    while(!pq.empty()) {
        int f = pq.top().first;
        pq.pop();
        for(auto e : V[f]) {
            int tt = bt[f];
            int go = e.first;
            int dt = e.second;
            int total = tt + dt;
            int wait = 0;
            if(!isGreen(total,go)) {
                wait = ((total/(light[go]))+1)*(light[go]) - total;
            }
            if(total+wait < bt[go]) {
                bt[go] = total+wait;
                pq.push({go,bt[go]});
            }
        }
    }
    cout<<bt[M]+TS;
}
