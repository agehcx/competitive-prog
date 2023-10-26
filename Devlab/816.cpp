#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> vec;
    int x;
    while (cin >> x) {
        if (x == 0) break;
        else vec.push_back(x);  
    }
    string str; cin >> str;
    if (str == "Max") {
        sort(vec.begin(), vec.end(), greater<int>());
        for (auto it : vec)
            cout << it << ' ';
    } else if (str == "Min") {
        sort(vec.begin(), vec.end(), less<int>());
        for (auto it : vec)
            cout << it << ' ';
    } else if (str == "Sum") {
        cout << accumulate(vec.begin(), vec.end(), 0LL);
    } else {
        cout << 0;
    }
}