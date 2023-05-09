#include<bits/stdc++.h>
using namespace std;

vector<bool> v(420, 0);

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N;
	cin>>N; 
  // (N>64?N--:N); use this for 100 pts
	unsigned long long B;
	unsigned long long MX = 0;
	
	for(int i=1; i<N; i++) {
		cin>>B;
		MX = max(MX,B);
	}
	
	for(int i=N-1; i>=1; i--) {
		v[i] = MX%2;
		MX >>= 1;
	}
	
	for(int i=1; i<N; i++) {
		cout<<(v[i]?"B":"W");
	}
}


/*
case 15:
WWWWWWWWWWWWWWWWWWWWBWBBWWWBBWBWWWBWBWBBBBWWWWBWBBBWBBWWWBWBWWBBWBBWBWBWBWBBW
 WWWWWWWWWWWWWWWWWWWBWBBWWWBBWBWWWBWBWBBBBWWWWBWBBBWBBWWWBWBWWBBWBBWBWBWBWBBW
*/
