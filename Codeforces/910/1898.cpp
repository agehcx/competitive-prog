#include <bits/stdc++.h>
using namespace std;

void solve(int testCase) {
    int n, k, cnt = 0;
    cin >> n >> k;
    queue<int> q;
    string x; cin >> x;
    for (int i = 0; i < n; i++) {
        if (x[i] == 'B') {
            q.push(i);
            cnt++;
        }
    }
    if (k == 0) {
        std::cout << q.back() + 1 << '\n';
    } else if(k == cnt) {
        std::cout << 0 << '\n';
    } else {
        while (k < cnt) {
            q.pop();
            k++;
        }
        std::cout << q.front() + 1 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int Q; cin >> Q;
    while(Q--) solve(Q);
}