#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    int tmp = N;
    if (N >= 1000) {
        cout << "ธนบัตร 1,000฿ : " << N / 1000 << " ฉบับ\n";
        N %= 1000;
    }
    if (N >= 500) {
        cout << "ธนบัตร 500฿ : " << N / 500 << " ฉบับ\n";
        N %= 500;
    }
    if (N >= 100) {
        cout << "ธนบัตร 100฿ : " << N / 100 << " ฉบับ\n";
        N %= 100;
    }
    if (N >= 50) {
        cout << "ธนบัตร 50฿ : " << N / 50 << " ฉบับ\n";
        N %= 50;
    }
    if (N >= 20) {
        cout << "ธนบัตร 20฿ : " << N / 20 << " ฉบับ\n";
        N %= 20;
    }
    if (N >= 10) {
        cout << "เหรียญ 10฿ : " << N / 10 << " เหรียญ\n";
        N %= 10;
    }
    if (N >= 5) {
        cout << "เหรียญ 5฿ : " << N / 5 << " เหรียญ\n";
        N %= 5;
    }
    if (N >= 1) {
        cout << "เหรียญ 1฿ : " << N << " เหรียญ\n";
    }
    cout << "จำนวนเงินที่แลกทั้งหมด ";
    int sz = int(floor(log10(tmp)));
    string ts = to_string(tmp);
    for (int i = 0; i < ts.size(); i++) {
        cout << ts[i];
        if (sz-- % 3 == 0 && sz > 0) cout << ',';
    }
    cout << " บาท";
}