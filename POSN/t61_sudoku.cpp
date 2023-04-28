#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin>>n;
	while(n--) {
		int ans = 0;
		int sd[10][10];
		for(int i=1; i<=9; i++) {
			string x;
			cin>>x;
			for(int j=1; j<=9; j++) {
				sd[i][j] = x[j-1] - '0';
			}
		}
		for(int i=1; i<=9; i++) {
			for(int j=1; j<=9; j++) {
				if(sd[i][j]==0) {
					int mem[10];
					int mem2[10];
					int mis = 0;
					for(int k=1; k<=9; k++){
						mem[k] = 0;
						mem2[k] = 0;
					}
					for(int k=1; k<=9; k++) {
						mem[sd[i][k]]++;
					}
					for(int k=1; k<=9; k++) {
						mem2[sd[k][j]]++;
					}
					for(int k=1; k<=9; k++) {
						if(mem[k]==0 && mem2[k]==0) {
							mis = k;
						}
					}
					ans += 100*j+10*i+mis;
				}
			}
		}
		cout<<ans<<'\n';
	}
}
