#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a[2], x;
    int cnt = 0;
    cin >> a[0] >> a[1];
    bool chk = true;
    bool chkM = true;
    for (int i = 0; i < a[0].size(); i++) {
        if ( !(a[0][i] >= '0' && a[0][i] <= '9')) {
            if (a[0][i] != '.') chk = false;
        }
    }
    for (int i = 0; i < a[1].size(); i++) {
        if (!(a[0][i] >= '0' && a[0][i] <= '9')) {
            chkM = false;
        }
    }
    double fs;
    int is;
    if (!chk || !chkM) {
        cout << "error input";
        return 0;
    } else if (a[0].find('.') != string::npos) {
        if (chk && a[1].size() == 0) {
            fs = stod(a[0]);
            int sz = a[0].substr(a[0].find('.')).size() - 1;
            for (int i = 1; i <= 12; i++) {
                double res = fs * i;
                cout << fixed << setprecision(sz) << fs << 'x' << i << " = ";
                if ((int)(res) == res) {
                    cout << fixed << setprecision(0) << res << '\n';
                } else {
                    cout << fixed << setprecision(2) << res << '\n';
                }
            }
        } else if (chk) {
            fs = stod(a[0]);
            int sz = a[0].substr(a[0].find('.')).size() - 1;
            for (int i = 1; i <= stoi(a[1]); i++) {
                double res = fs * i;
                cout << fixed << setprecision(sz) << fs << 'x' << i << " = ";
                if ((int)(res) == res) {
                    cout << fixed << setprecision(0) << fs * i << '\n';
                } else {
                    cout << fixed << setprecision(2) << fs * i << '\n';
                }
            }
        }
    } else {
        if (chk && a[1].size() == 0) {
            is = stoi(a[0]);
            for (int i = 1; i <= 12; i++) {
                cout << is << 'x' << i << " = ";
                cout << is * i << '\n';
            }
        } else if (chk && chkM) {
            is = stoi(a[0]);
            for (int i = 1; i <= stoi(a[1]); i++) {
                cout << fs << 'x' << i << " = ";
                cout << is * i << '\n';
            }
        }
    }
}