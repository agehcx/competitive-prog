#include<bits/stdc++.h>
using namespace std;

#define INF 1e9+7
#define ll 	long long 
#define pii pair<int,int>
#define pb	push_back

int mv[100005]={};
int MxW = 0;

bool chk(int i,int lc) {
	if(mv[i]==INF) {
		return 0;
	}
	int tmp = mv[i];
	mv[i] = INF;
	lc++;
	MxW = max(MxW,lc);
	chk(tmp,lc);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int Q;
	cin>>Q;
	memset(mv,0,sizeof(mv));
	while(Q--) {
		int n;
		cin>>n;
		for(int i=1; i<=n; i++) {
			cin>>mv[i];
		}
		int cnt = 0;
		int itr = 1;
		int cyc = 0;
		for(int i=1; i<=n; i++) {
			if(mv[i]!=INF) {
				MxW = 0;
				chk(i,0);
				if(MxW == 1) {
					cyc = 1;
				}
				else if(MxW%2==0) {
					cyc = 2;
				}
				else if(MxW%2==1) {
					cyc = 3;
				}
			}
		}
		cout<<cyc<<"\n";
	}
}
