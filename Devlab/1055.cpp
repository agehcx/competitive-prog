#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double totalgpa = 0.0;
    int n = 7; string x;
    string grading = "FDCBA";
    while (n--) {
        cin >> x;
        x[0] = char(toupper(x[0]));
        totalgpa += grading.find(x[0]);
        if (x.size() > 1) {
            totalgpa += 0.5;
        }
    }

    cout << fixed << setprecision(2) << floor (100 * totalgpa / 7) / 100;
}