#include <bits/stdc++.h>
using namespace std;

int main() {
	string a,b;
  	getline(cin ,a);
	getline(cin ,b);
	int c1,c2;
	c1 = count(a.begin(),a.end(),' ');
	c2 = count(b.begin(),b.end(),' ');
	int ans[c1+1];
	int cc = 0;
	memset(ans,0,sizeof(ans));
	if(c1==c2) {
	    int tmp = 0;
	    bool mn = false;
	    for(int i=0; i<a.size(); i++) {
	      	if(a[i]>='0' && a[i]<='9' || a[i]=='-') {
	        	if(a[i]=='-') {
		          	tmp = -10*(a[i+1]-'0');
		          	if(!(a[i+2]>='0' && a[i+2]<='0')) {
		            	ans[cc] += tmp;
		            	cc++;
		            	tmp = 0;
		          	}
		          	i+=1;
	        	}	
	        	else {
		          	if(tmp<0) {
		            	if(mn) {
							tmp = tmp - (a[i]-'0');
		              		mn = false;
		            	}
		           		else tmp = 10*tmp - (a[i]-'0');
		          	}
		          	else tmp = tmp*10 + ( a[i] - '0' );
		          	if(!(i!=a.size()-1 && a[i+1]>='0' && a[i+1] <='9')) {
		            	ans[cc] += tmp;
		            	if(tmp > 32548) {
			              	cout<<"Invalid";
			              	return false;
		            	} 
		            	cc++;
		            	tmp = 0;
		          	}
		        }
		    }
	    }
	    tmp = 0;    
	    cc = 0;
	    mn = false;
	    for(int i=0; i<b.size(); i++) {
		    if(b[i]>='0' && b[i]<='9' || b[i]=='-') {
		        if(b[i]=='-') {
		          	tmp = -1*(10*(b[i+1]-'0'));
		          	if(!(b[i+2]>='0' && b[i+2]<='9')) {
			            ans[cc] += tmp;
			            cc++;
			            tmp = 0;
		          	}
		          	mn = true;
		          	i+=1;
		        }
		        else {
		          	if(tmp<0) {
			            if(mn) {
							tmp = tmp - (b[i]-'0');
			              	mn = false;
			            }
			            else tmp = 10*tmp - (b[i]-'0');
		          	}
		          	else tmp = tmp*10 + ( b[i] - '0' );
		          	if(!(i!=b.size()-1 && b[i+1]>='0' && b[i+1] <='9')) {
			            ans[cc] += tmp;
			            if(tmp > 32548) {
			              cout<<"Invalid";
			              return false;
			            } 
			            cc++;
			            tmp = 0;
		          	}
		        }
		    }
	    }
	    for(int i=0; i<=c1; i++) {
	      cout<<ans[i]<<" ";
	    }
	}
	else {
	    cout<<"Invalid";
	}
}
