#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    cin.ignore();
    string str[N];
    vector<vector<string>> vec(N, vector<string>());
    for (int i = 0; i < N; i++) {
        getline(cin, str[i]);
        int sz = count(str[i].begin(), str[i].end(), ' ');
        vec[i].resize(sz + 1);
        istringstream iss(str[i]);
        string tmp;
        int idx = 0;
        while (iss >> tmp) {
            vec[i][idx++] = tmp;
        }
    }
    string msg = "";
    bool merged[N] = {false};
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) continue;
            bool chk = false;
            int idxm = 0;
            for (int k = 0; k <= 4; k++) {
                bool tmpChk = true;
                int cnt = 0;
                for (int l = k; l >= 0; l--) {
                    if (vec[i][vec[i].size() - 1 - l] != vec[j][cnt]) {
                        tmpChk = false;
                        break;
                    }
                    cnt++;
                }
                if (tmpChk) {
                    chk = true;
                    idxm = max(idxm, k);
                }
            }
            if (chk && !merged[j]) {
                merged[i] = true;
                merged[j] = true;
                if (msg.size() == 0) for (auto& it : vec[i]) msg += it + ' ';
                for (auto it = vec[j].begin() + idxm; it != vec[j].end(); it++) msg += *it + ' ';
            }
        }
    }
    std::cout << msg;
}