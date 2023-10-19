#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str; cin >> str;
    cout << (str == "ROCK" ? "PAPER" : str == "PAPER" ? "SCISSORS" : "ROCK");
}