#include <bits/stdc++.h>
using namespace std;

#define INF	1e9+7
#define ll	long long
#define pii pair<int,int>

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m;
	cin>>n>>m;
	queue<int> q;
	for(int i=1; i<=n; i++) {
		q.push(i);
	}
	for(int i=0; i<n; i++) {
		for(int j=1; j<m; j++) {
			q.push(q.front());
			q.pop();
		}
		cout<<q.front()<<' ';
		q.pop();
	} 
}
