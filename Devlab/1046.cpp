#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    cout << (n < 0 ? "Please enter number greater than or equal to -1." : n < 1 ? "No courses." : string("Now, You have " + to_string(n) + " courses."));
}