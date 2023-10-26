#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str; cin >> str;
    int sz = str.size();
    string tmp = "";
    string bitString = "";
    for (int i = 0; i < sz; i++) {
        tmp += str[i];
        if ((i + 1) % 2 == 0 && i > 0) {
            if (tmp == "pe") bitString += '1';
            else bitString += '0';
            tmp = "";
        }
        if ((i + 1) % 16 == 0 && i > 0) {
            int binSum = 0;
            int res = 1;
            for (int j = 7; j >= 0; j--) {
                binSum += (bitString[j] - '0') * res;
                res *= 2;
            }
            bitString = "";
            cout << char(binSum);
        }
    }
}