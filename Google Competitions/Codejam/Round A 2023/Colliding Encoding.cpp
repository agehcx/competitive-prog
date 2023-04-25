#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define pii pair<int,int>
#define pll pair<long,long>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,w,sz,cnt;
    string x;
    cin>>n;
    int vl[26];
    for(int tc=0; tc<n; tc++) {
        vector<string> v;
        for(int i=0; i<26; i++) {
            cin>>vl[i];
        }
        cin>>w;
        for(int i=0; i<w; i++) {
    	    string tonum = "";
    	    cin>>x;
    	    for(int j=0; j<x.size(); j++)  {
    	        tonum += vl[x[j]-'A']+'0';
    	    }
    	    v.push_back(tonum);
    	    }
	sz = v.size();
	cnt = 0;
	bool Collision = false;
    	set<string> seen;
	for(string e:v) {
	    if(seen.count(e)>0) {
	    	Collision=true;
	    	break;
		}
	    seen.insert(e);
	}
      
        cout<<"Case #"<<tc+1<<": ";
	if(Collision) {
	   cout<<"YES\n";
	}
	else {
	   cout<<"NO\n";
        }
    }
}
