#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b; cin >> a >> b;
    cout << "Profit " << a - b << " Bath\n";
    cout << "Percent " << (100 * (a - b)) / b << " Percent";
}