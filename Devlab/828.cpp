#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str; cin >> str;
    vector<int> vec;
    string tmp = "";
    str += ',';
    for (char c : str) {
        if (c == ',') {
            vec.push_back(stoi(tmp));
            tmp = "";
        }
        else tmp += c;
    }
    sort(vec.begin(), vec.end());
    cout << *(vec.begin() + 1);
}