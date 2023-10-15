#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9+7;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int x[n];
	int cn=0;
	for(int i=0; i<n; i++) {
		cin>>x[i];
		if(x[i]==1)cn++;
	}
	queue<int> q;
	if(n<=101) {
		int l=1;
		for(int it=0; it<l; it++) {
			for(int i=0; i<n; i++) {
				if(x[i]==1) {
					if(i>0 && i<n-1) {
						q.push(i-1);
						q.push(i+1);
						l++;
					}
					else {
						if(i==0) {
							q.push(i+1);
							l++;
						}
						else if(i==n-1) {
							q.push(i-1);
							l++;
						}
					}
					while(!q.empty()) {
						x[q.front()]^=1;
						q.pop();
					}
					x[i] = INF;
					cout<<i+1<<" ";
				}
			}
		}
	}
	else {
		int l=1;
		int fl=0;
		for(int it=0; it<=sqrt(l); it++) {
			for(int i=0; i<n; i++) {
				if(x[i]==1) {
					if(i>0 && i<n-1) {
						q.push(i-1);
						q.push(i+1);
						l++;
					}
					else {
						if(i==0) {
							q.push(i+1);
							l++;
						}
						else if(i==n-1) {
							q.push(i-1);
							l++;
						}
					}
					while(!q.empty()) {
						x[q.front()]^=1;
						q.pop();
					}
					x[i] = INF;
					cout<<i+1<<" ";
				}
			}
		}
	}	
}
/*
4
0 1 0 0

2 1 3 4

3
1 1 1

7 
0 0 0 0 0 0 1 

*/
