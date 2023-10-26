#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b; cin >> a >> b;
    vector<pair<int, int>> vec;
    int x, y;
    for (int i = 0; i < 6; i++) {
        cin >> x >> y;
        vec.push_back(make_pair(x,y));
    }
    int change = b - a;
    cout << "change: " << change << '\n';
    for (auto &[ita, itb] : vec) {
        if (change >= ita) {
            if (itb >= change / ita) {
                cout << "cash: " << ita << " amount: " << change / ita << '\n';
                change = change % ita;
            } else {
                if (itb != 0) {
                    cout << "cash: " << ita << " amount: " << itb << '\n';
                    change = change - (ita * itb);
                }
            }
        }
    }
}