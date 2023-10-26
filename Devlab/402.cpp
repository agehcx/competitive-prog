#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string sc; cin >> sc;
    string str = sc.substr(1, sc.size() - 2);
    int sz = count(str.begin(), str.end(), ',');
    vector<int> vec(sz + 1);
    string tmp;
    str += ' ';
    int cnt = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            tmp += str[i];
        }
        else {
            vec[cnt++] = stoi(tmp);
            tmp = "";
        }
    }
    bool chk = true;
    int arrSum = accumulate(vec.begin(), vec.end(), 0);
    for (int i = 0; i < sz; i++) {
        if (!(vec[i] < arrSum - vec[i])) {
                chk = false;
            break;
        }
    }
    cout << (chk ? "true" : "false");
}