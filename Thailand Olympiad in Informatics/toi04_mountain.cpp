#include <bits/stdc++.h>
using namespace std;

#define pii	pair<int,int>

char mt[11][81];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int Q; cin>>Q;
	int MxH = 0, MxW = 0;
	priority_queue<pii,vector<pii>,greater<pii>> pq, pq2;
	for(int i=1; i<=Q; i++) {
		int S,H;
		cin >> S >> H;
		pq.push({S,H});
		pq2.push({S,H});
		MxH = max(MxH,H);
		MxW = max(MxW,(S-1)+2*H);
	}
	for(int i=0; i<11; i++)
		for(int j=0; j<81; j++)
			mt[i][j]='.';
	while(!pq.empty()) {
		int S = pq.top().first;
		int H = pq.top().second;
		for(int i=0; i<H; i++) {
			for(int j=i; j<H; j++) {
				if(i==j) {
					if(mt[MxH-i][S+j-1] == '.')
					mt[MxH-i][S+j-1] = '/';
				}
				else {
					mt[MxH-i][S+j-1] = 'X';
				}
			}
		}
		pq.pop();
	}

	while(!pq2.empty()) {
		int S = pq2.top().first;
		int H = pq2.top().second;
		bool collision = false;
		for(int i=0; i<H; i++) {
			for(int j=H-i; j>0; j--) {
				if(i+j==H) {
					if(mt[MxH-j+1][S+H-1+i] == '/' && collision==false) {
						mt[MxH-j+1][S+H-1+i] = 'v';
						collision = true;
					}
					else if(mt[MxH-j+1][S+H-1+i]=='.'){
						mt[MxH-j+1][S+H-1+i] = '\\';
					}
				}
				else {
					mt[MxH-j+1][S+H+i-1] = 'X';
				}
			}
		}
		pq2.pop();
	}
	for(int i=1; i<=MxH; i++) {
		for(int j=0; j<MxW; j++) {
			cout<<mt[i][j];
		}
		cout<<'\n';
	}
}