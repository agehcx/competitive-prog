#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str; cin >> str;
    int nd; cin >> nd;
    int cd;
    if (str == "sunday") cd = 0;
    else if (str == "monday") cd = 1;
    else if (str == "tuesday") cd = 2;
    else if (str == "wednesday") cd = 3;
    else if (str == "thursday") cd = 4;
    else if (str == "friday") cd = 5;
    else if (str == "saturday") cd = 6;
    cd = (cd + nd) % 7;
    if (cd == 0) cout << "sunday";
    else if (cd == 1) cout << "monday";
    else if (cd == 2) cout << "tuesday";
    else if (cd == 3) cout << "wednesday";
    else if (cd == 4) cout << "thursday";
    else if (cd == 5) cout << "friday";
    else if (cd == 6) cout << "saturday";
}