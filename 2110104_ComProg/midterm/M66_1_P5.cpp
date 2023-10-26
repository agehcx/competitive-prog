#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[1441];
    int N; cin >> N;
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < N; i++) {
        int l, r;
        cin >> l >> r;
        for (int j = l; j < r; j++) arr[j]++;
    }
    int mx = 0;
    for (int i = 0; i < 1441; i++) mx = max(mx, arr[i]);
    cout << mx << '\n';
}