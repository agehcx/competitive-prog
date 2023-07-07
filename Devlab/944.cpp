// https://www.borntodev.com/devlab/contribute/editor?task=944 //

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5;
vector<bool> prime(MAXN, true);

bool isAbundantNumber(int Number) {
	
	int sumDivisor = 1; 
	// For any number, It's divisible by 1.
	
	// For checking all divisor of any specific Number we could iterate trough 2 to Sqrt(N) + 1.
	
	for(int i = 2; i * i <= Number; i++) {
		if(Number % i == 0) {
			sumDivisor += i;
			if(i * i != Number) sumDivisor += (Number / i); 
			// When i * i = Number the won't add another i to sum.
		}
	}
	return sumDivisor > Number ;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	/* Sieve of eratosthenes O( N lg lg N )
	For skipping any N thats prime cause prime only had divisor 1, itself */
	
	prime[0] = false;
	prime[1] = false;
	for (int i = 2; i * i <= MAXN; i++) {
		if (prime[i]) {
			for (int j = i * i; j <= MAXN; j += i) {
				prime[j] = false;
			}
		}
	}	
	
	int Q = 1;
	cin >> Q;
	

	while(Q--) {
		int count = 0;
		int L, R;
		cin >> L >> R;
		for (int i = L; i <= R; i++) { // O(R)
			if (!prime[i] && isAbundantNumber(i)) {
				// Skipping when Number is prime cause factor of Prime is only 1 and itself.
				count++;
			}
		}	
		cout<<count<<'\n';
	}

  // Time complexity : O(Q * R sqrt (R))
}
