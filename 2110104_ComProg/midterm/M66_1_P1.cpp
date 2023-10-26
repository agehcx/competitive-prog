#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a < 100) {
    fi:
        if (b < c) {
            a += b * b + c * c;
            if (a % 10 == 5) {
                goto endpoi;
            } else {
                if (a & 1) {
                    c = c - 1;
                } else {
                    b = b + 1;
                }
                if (a / (b * c) > 20) goto endpoi;
                else goto fi;
            }
        } else {
            goto endpoi;
        }


    endpoi:
        a += 0;
    } else {
        if (a < b) {
            if (b < c) {
                a = a + 3;
                b = a + c;
                c = b + a;
            } else {
                if (a < c) {
                    a = 2 * a;
                    b = a + b;
                    c = b + c;
                } else {
                    a = c + a;
                    b = 2 * b;
                    c = b - a;
                }
            }
        } else {
            if (c > a) {
                a = 3 * b;
                b = c + a;
                c = a + b;
            } else {
                if (b > c) {
                    a = b + c;
                    b = 7 * a;
                    c = b - a;
                } else {
                    a = c - 5;
                    b = a - b;
                    c = 3 * b;
                }
            }
        }
    }
    cout << a << ' ' << b << ' ' << c;
}