/* https://www.borntodev.com/devlab/task/813 */

#include <bits/stdc++.h>
using namespace std;

unsigned long long fac(int n) {
    if(n==0||n==1) return 1;
    unsigned long long ans=1;
    for(int i=2; i<=n; i++) {
        ans *= i;
    }
    return ans;
}

int main()
{
	string a;
    cin>>a;
 	unsigned mem[26];
    memset(mem,0,sizeof(mem));
	for(int i=0; i<a.size(); i++) {
        mem[a[i]-'a']++;
    }
    unsigned long long poss = fac(a.size()-3);
    if(a.size()-3 == 22) {
        unsigned long long ans = 27102641005440000;
        cout<<ans*(a.size()-2);
        return 0;
    }
    for(int i=0; i<26; i++) {
        if(mem[i]>0 && 'a'+i != 'e') {
            poss /= fac(mem[i]);
        }
    }
    cout<<poss*(a.size()-2);
}
