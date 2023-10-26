#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    string str; cin >> str;
    for (auto c : str) cout << arr[c - 'A'] << ' ';
}