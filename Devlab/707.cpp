#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    int arr[N];
    int mx = INT_MIN;
    int mn = INT_MAX;
    int av = 0;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
        av += arr[i];
    }
    av /= N;
    cout << "Winner : " << mx / 3600 << " hr " << (mx % 3600) / 60 << " min " << (mx % 60) << " sec\n";
    cout << "Loser : " << mn / 3600 << " hr " << (mn % 3600) / 60 << " min " << (mn % 60) << " sec\n";
    cout << "Average : " << av / 3600 << " hr " << (av % 3600) / 60 << " min " << (av % 60) << " sec\n";
    
}