/* https://www.borntodev.com/devlab/task/932 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
	  unsigned long long a,b,MOD = 1e9+7;
    cin>>a>>b;
    cout<<((((unsigned long long)(floor(log10(a)*b)))+1)%MOD);
}
