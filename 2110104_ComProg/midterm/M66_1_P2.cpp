#include<bits/stdc++.h>
#include<cmath>
#include<math.h>
using namespace std;

int main() {
    double u, theta, t;
    cin >> u >> theta >> t;
    double h = (t - (u * sin(theta * M_PI / 180) / 10)) * (u * sin(theta * M_PI / 180) + (5 * (t - (3 * u * sin(theta * M_PI / 180)) / 10)));
    double r = u * cos(theta * M_PI / 180) * t;
    cout << round(h * 10) / 10 << ' ';
    cout << round(r * 10) / 10;
}