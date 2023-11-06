#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    vector<int> vec;
    while (cin >> x) vec.push_back(x);
    for (auto it : vec) cout << it + (it * !(it & 1)) << ' ';
}