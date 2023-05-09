#include<bits/stdc++.h>
using namespace std;

bool flag[1005][1005];
int n,m;

int fill(int i, int j) {
	if((i<0) || (j<0) || (i>=n) || (j>=m) || (flag[i][j]==1)) {
		return 0;
	}
	flag[i][j] = 1;
	fill(i-1,j);
	fill(i+1,j);
	fill(i,j-1);
	fill(i,j+1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int cc;
	cin>>cc;
	while(cc--) {
		cin>>n>>m;
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				char z;
				cin>>z;
				if(z=='*') {
					flag[i][j] = 1;
				}
				else {
					flag[i][j] = 0;
				}
			}
		}
		int cnt = 0;
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				if(flag[i][j]==0) {
					fill(i,j);
					cnt++;
				}
			}
		}
		cout<<cnt<<"\n";
	}
}
