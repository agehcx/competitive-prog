#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    string str; cin >> str;
    cout << "Team : " << str << '\n';
    int score = 0;
    for (int i = 0; i < N; i++) {
        string tmp; cin >> tmp;
        if (tmp == "SG") score += 3;
        else if (tmp == "F") score += 1;
        else score += 2;
    }
    cout << "Get " << score << " points";
}