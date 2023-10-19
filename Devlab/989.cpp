#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    vector<vector<string>> v(N, vector<string>(20, ""));
    int cnt = 0;
    int mxn = 0;
    string x[2][N];
    for (int i = 0; i < N; i++) {
        string a;
        int sc;
        cin >> a >> sc;
        x[i][0] = a;
        x[i][1] = sc;
        v[cnt++][0] = a;
        mxn = max(mxn, sc);
    }
    for (int i = 0; i < N; i++) {
        for(int i = 0 ; i < N; i++ )
    }
}