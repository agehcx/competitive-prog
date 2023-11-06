#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    stack<int> s;
    while (N--) {
        int x; cin >> x;
        s.push(x);
    }
    while (!s.empty()) cout << s.top() << ' ', s.pop();
}