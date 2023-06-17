/* https://www.borntodev.com/devlab/task/754 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,ans,b=1;cin>>n;
    while(b<=n)b*=2;
    ans = (2*n)+1;
    ans = ans-b;
    cout<<ans;
}
