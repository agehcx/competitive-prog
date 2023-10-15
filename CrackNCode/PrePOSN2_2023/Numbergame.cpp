#include<bits/stdc++.h>
using namespace std;

#define INF		1e9+7
#define ll 		long long
#define pii 	pair<int,int>
#define pll		pair<ll,ll>	

int main() {
    int n;
    cin>>n;
    long num[n];
    long dp[n][n];
    long mx = INF;
    for(int i=0; i<n; i++) {
        cin>>num[i];
    }
    memset(dp,0,sizeof(dp));
    for(int i=0; i<n; i++) {
        dp[i][i]=num[i];
    }
    for(int h=3; h<=n; h++) {
        for(int i=0; i<=n-h; i++) {
            int j = i+h-1;
            for(int k=i+1; k<j; k++) {
                long score = num[i]+num[j]+dp[i][k]+dp[k][j];
                if(dp[i][j]!=0) {
                  dp[i][j]=max(dp[i][j],score);
                }
                else {
                  dp[i][j]=max(-mx,score);
                }
            }
        }
    }
    cout<<dp[0][n-1];
}
