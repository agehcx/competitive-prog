#include <bits/stdc++.h>
using namespace std;

#define INF	1e9+7
#define ll      long long
#define pii	pair<int,int>

int dx[] = {0,-1,0,1};
int dy[] = {1,0,-1,0};

int dix8[] = {0,-1,-1,-1,0,1,1,1};
int diy8[] = {1,1,0,-1,-1,-1,0,1};

bool InsideCheck(int i, int j, int x, int y) {
	return (i>=0 && i<x && j>=0 && j<y);
}

int main() {
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	int w,l;
	cin>>w>>l;
	int light[w][l];
	memset(light,false,sizeof(light));
	for(int i=0; i<w; i++) {
		string str;
		cin>>str;
		for(int j=0; j<str.size(); j++) {
			light[i][j] = str[j] - '0';
		}
	}
	queue<pii> q;
	int candle = 0;
	for(int i=0; i<w; i++) {
		for(int j=0; j<l; j++) {
			if(light[i][j]==1) {
				candle++;
				light[i][j] = 0;
				q.push({i,j});
				while(!q.empty()) {
					pii fq = q.front();
					q.pop();
					for(int k=0; k<8; k++) {
						int dix = fq.first + dix8[k];
						int diy = fq.second + diy8[k];
						if(InsideCheck(dix,diy,w,l) && light[dix][diy]==1) {
							light[dix][diy] = 0;
							q.push({dix,diy});
						}
					}
				}
			}
		}
	}
	cout<<candle;
}
