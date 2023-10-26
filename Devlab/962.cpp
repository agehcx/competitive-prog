#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    int ta = stoi(a.substr(0, 2)) * 60 + stoi(a.substr(3));
    int tb = stoi(b.substr(0, 2)) * 60 + stoi(b.substr(3));
    if (ta == 1440 || tb == 1440 ) {
        cout << "Time format went wrong";
    } else if ( (tb - ta) / 15 < 1 && ta <= tb) {
        cout << "Can not play any round :P";
    } else if ( ta <= tb ) {
        cout << "Can play " << (tb - ta) / 15 << " round";
    } else {
        if (((tb + 1440) - ta) / 15 < 1) {
            cout << "Can not play any round :P";
        } else {
            cout << "Can play " << ((tb + 1440) - ta) / 15 << " round";
        }
    }
}