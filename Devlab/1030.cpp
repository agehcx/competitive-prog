#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    priority_queue<int> pq;
    for (int i = 0; i < 3; i++) {
        int x; cin >> x;
        pq.push(x);
    }
    while (!pq.empty()) {
        cout << pq.top() << '\n';
            pq.pop();
    }
}