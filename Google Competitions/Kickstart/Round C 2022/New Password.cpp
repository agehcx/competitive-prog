#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=1; i<=n; i++) {
        int q;
        cin>>q;
        string x;
        cin>>x;
        int c=x.size();
        int u=0,l=0,d=0,s=0;
        for(auto e:x) {
            if(e>='A'&&e<='Z') u++;
            if(e>='a'&&e<='z') l++;
            if(e>='0'&&e<='9') d++;
            if(e=='#'||e=='@'||e=='*'||e=='&') s++;
        }
        if(l==0) x = (x+'a');
        if(u==0) x = (x+'A');
        if(d==0) x = (x+'1');
        if(s==0) x = (x+'&');
        if(x.size()<7) {
        	int i=0;
            while(x.size()!=7) {
            	x.append(to_string(i));
            	i++;
			}
        }
        cout<<"Case #"<<i<<": "<<x<<endl;
    }
}
