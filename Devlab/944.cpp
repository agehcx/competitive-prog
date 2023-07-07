// https://www.borntodev.com/devlab/task/944 //

#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5;

vector<bool> prime(MAXN, true);
vector<bool> abundant(MAXN, false);

bool isAbundantNumber(int Number) {
    int sumDivisor = 1;
    for (int i = 2; i * i <= Number; i++) {
        if (Number % i == 0) {
            sumDivisor += i;
            if (i * i != Number) sumDivisor += (Number / i);
        }
    }
    return sumDivisor > Number;
}

void precompute() {
    for (int i = 2; i <= MAXN; i++) {
	if (!prime[i] && isAbundantNumber(i)) {
            abundant[i] = true;
        }
    }
}

void sieveOfEratosthenes() {
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i * i <= MAXN; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                prime[j] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
    sieveOfEratosthenes();
	precompute();
	
    int Q;
    cin >> Q;

    while (Q--) {
        int count = 0;
        int L, R;
        cin >> L >> R;

        for (int i = L; i <= R; i++) {
            if(abundant[i]) count++;
        }

        cout << count << '\n';
    }
	
    // Time complexity : O(Q * R)
}
