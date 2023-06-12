#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    bool dp[n][5*n-2];
    memset(dp,false,sizeof(dp));
    for(int i=0; i<n; i++) {
        dp[n-1][i] = true;
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++) {
            dp[n-1-j][n+1+2*i] = true;
        }
    }
    for(int i=1; i<n; i++) {
        for(int j=0; j<=i; j++) {
            dp[n-1-j][n+1+2*n+2*i-2] = true;
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<5*n-2; j++) {
            cout<<(dp[i][j]?'*':' ');
        }
        cout<<'\n';
    }
}
