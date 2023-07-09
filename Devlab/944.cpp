// https://www.borntodev.com/devlab/task/944 //

#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5;

vector<int> dp(MAXN, 0);
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

void preCompute() {
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

void prefixSum() {
    for (int i = 2; i <= MAXN; i++) {
      dp[i] = dp[i-1] + abundant[i];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
    sieveOfEratosthenes();
preCompute();
    prefixSum();
	
    int Q;
    cin >> Q;

    while (Q--) {
      
        int count = 0;
        int L, R;
        cin >> L >> R;

        cout << dp[R] - dp[L-1] << '\n';
    }
}
