#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

#define st	first
#define nd	second
#define pb 	push_back
#define mp	make_pair

int main() {
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	int m,n,a,b,c,sum;
	scanf("%d %d",&m,&n);
	int v[m+1];
	int s[m+1];
	scanf("%d",&v[1]);
	s[1]=v[1];
	s[0]=0;
	v[0]=0;
	for(int i=2; i<m+1; i++) {
		int x;
		scanf("%d",&x);
		v[i]=x;
		s[i]=s[i-1]+x;
	}
	for(int i=0; i<n; i++) {
		sum=0;
		scanf("%d %d %d",&a,&b,&c);
		if(b==1) {
			sum=s[c]-s[a-1];
		}
		else {
			for(int i=a; i<=c; i+=b) {
				sum+=v[i];
			}
		}
		printf("%d ",sum);
	}
	return 0;
}
