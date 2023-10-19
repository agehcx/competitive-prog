#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    queue<int> q;
    int x;
    while (cin >> x) q.push(x);
    int sz = q.size();
    long long subArraySum = 0;
    for (int i = 0; i < sz; i++) {
        subArraySum += q.front() * 3;
        if (i == 0 || i == sz - 1) subArraySum -= q.front();
        q.pop();
    }
    cout << subArraySum;
}