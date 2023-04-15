#include<bits/stdc++.h>
using namespace std;
bool s[50002][72];
int main() {
	cin.tie(nullptr)->std::ios_base::sync_with_stdio(false);
	int x;
	cin>>x;
	int mxN=0;
	memset(s,0,sizeof(s));
	for(int i=0; i<x; i++) {
		int r,st,so;
		cin>>r>>st>>so;
		mxN = max(r,mxN);
		int end = (st+so-1>70)?70:st+so-1;
		for(int j=st-1; j<end; j++) {
			s[r][j] = 1;
		}
	}
	for(int i=1; i<mxN+1; i++) {
		for(int j=0; j<70; j++) {
			cout<<(s[i][j]?'x':'o');
		}
		cout<<"\n";
	}
}
