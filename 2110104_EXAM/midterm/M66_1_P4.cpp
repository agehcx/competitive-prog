#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long x) {
    if (x % 2 == 0) return false;
    for (long long i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int N; cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++) {
        string str, tmp;
        getline(cin, str);
        int arr[4];
        istringstream iss(str);
        int cnt = 0;
        while (iss >> tmp) {
            arr[cnt++] = stoi(tmp);
        }
        string num = "";
        for (int j = 0; j < 4; j += 2) {
            for (int k = 0; k < arr[j + 1]; k++) num += to_string(arr[j]);
        }

        long long number = stoll(num);
        if (isPrime(number)) cout << "YES\n";
        else cout << "NO\n";
    }
}