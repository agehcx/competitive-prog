#include<bits/stdc++.h>
using namespace std;
#define ull 	unsigned long long 
const int MX = 1e9+7;
int main() {
	ull int er,n,si;
	cin>>er>>n>>si;
	vector<pair<pair<long double,ull int>,ull int>> v;
	ull int cnt=0;
	ull int mp=0;
	v.push_back({{si,si},0});
	if(n==0) {
		cout<<er*si;
		return 0;
	}
	if(er==0) {
		cout<<"0";
		return 0;
	}
	for(int i=0; i<n; i++) {
		long double p,cost;
		cin>>p>>cost;
		ull int nm = pow(2,p);
		long double cp = cost/nm;
		v.push_back({{cp,cost},p});
	}
	sort(v.begin(),v.end());
	//for(auto e:v)cout<<e.first.first<<" "<<e.first.second<<" "<<e.second<<"\n";
	int sz = v.size();
	for(int i=0; i<sz; i++) {
		if(er==0) {
			break;
		}
		else {
			long double vf = v.front().first.second;
			ull int vs = v.front().second;
			ull int pot = pow(2,vs);
			//cout<<er<<" "<<vf<<" "<<vs<<" "<<pot<<"\n";
			//cout<<(er/pot)*(pot*vf)<<" "<<(er/pot)<<"\n";
			cnt += (er/pot)*(vf);
			er = er - (er/pot)*pot;
			v.erase(v.begin());
		}
	}
	cout<<cnt;	
} 
