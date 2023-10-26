#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str; cin >> str;
    str = str.substr(1, str.size());
    string tmp;
    vector<int> vec;
    for (int i = 0; i < str.size(); i++) {
        if (isalnum(str[i])) tmp += str[i];
        else {
            vec.push_back(stoi(tmp));
            tmp = "";
        }
    }
    if (vec.size() % 2 == 0) {
        cout << '0';
        return 0;
    }
    map<int, int> mp;
    for (auto& it : vec) mp[it]++;
    for (auto& it : mp) {
        if (it.second == 1) {
            cout << it.first;
            return 0;
        }
    }
    cout << '0';
}