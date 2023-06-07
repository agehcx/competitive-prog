/* https://www.borntodev.com/devlab/task/541 */

#include <iostream>
#include <vector>
using namespace std;

const int MX = 1e5+9;
vector<int> dp(MX);
vector<bool> prime(MX, true);
int mxv = 0, mbc = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
	  const long long inp = n;
	  for(int i=4; i<=n; i+=2) prime[i] = false;
    for(int i =3; i<=n; i+=2) {
        if(pime[i]) {
            for(int j=i*i; j<=n; j+=i+i) {
                prime[j] = false;
            }
        }
	  }   
    while(n > 1) {
	    for(int i=2; i<inp; i++) {
	        if (prime[i]&&n%i==0) {
	            dp[i]++;
	            n /= i;
	            if(dp[i]==1) mbc++;
	            mxv = max(mxv,i);
//	          cout<<"Divisible "<<i<<" "<<n<<" \n";
	            break;
	        }
	    }
	  }
    int cnt = 0;
    for(int i=2; i<=mxv; i++) {
        if(dp[i]!=0) {
            if(dp[i]>1) cout<<i<<'^'<<dp[i];
            else cout<<i;
            cnt++;
            if(cnt!=mbc)cout<<" * ";
        }
    }

    return 0;
}

