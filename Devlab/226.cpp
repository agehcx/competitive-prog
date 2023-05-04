// https://www.borntodev.com/devlab/task/226 //

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	queue<pair<long,int>> q;
	queue<long> qq;
	set<int> chk;
	for(int i=1; i<=n; i++) {
	    int x;
	    cin>>x; 
	    q.push({x,i});
	    qq.push(x);
	    chk.insert(x);
	}
	long fnd;
	cin>>fnd;  
	int spc = 0;
	while(!qq.empty()) {
		if(qq.front()==fnd) {
			spc++;
		}
		qq.pop();
	}
	if(chk.count(fnd)==0) {
		cout<<"Not Found";
	}
  	else {
		if(spc==1) {
			cout<<"Position: ";
			while(!q.empty()) {
				if(q.front().first==fnd) {
					cout<<q.front().second;
					break;
				}	
				q.pop();
			}
		}
		else {
			int cnt=1;
			cout<<"Position: ";
			while(!q.empty()) {
				if(q.front().first==fnd) {
					cout<<q.front().second;
					if(cnt!=spc) {
					cout<<',';
					}
				cnt++;
				}
			q.pop();
			}
		}
	}
}

//Tips:  Run for check input format
