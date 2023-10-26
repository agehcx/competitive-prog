#include <bits/stdc++.h>
using namespace std;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M; cin >> N >> M;
    vector<int> vec[N + 1];
    for (int i = 0; i < M; i++) {
        int u, v; cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);    
    }
    vector<bool> vis(N + 1, false);
    vector<int> maxDist(N + 1, 0);
    int mxs = 0;
    vector<int> res[N + 1];
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push(make_pair(N, 0));
    while (!pq.empty()) {
        auto [f, s] = pq.top();
        pq.pop();
        // if (vis[f]) continue;
        // vis[f] = true;
        for (auto& it : vec[f]) {
            if (s + 1 > mxs && f > it) {
                res[f].push_back(it);
                if (!(s + 1 == mxs)) res[N].clear();
                res[N] = res[f];
                mxs = s + 1;
                pq.push({it, s + 1});
            }
        }
    }
    cout << mxs;
    cout << '\n';
    for (auto it : res[N]) {
        cout << it << ' ';
    }
}