
        if (!sieve[i]) {
            prime[cnt++] = i;
            for (int j = i * i; j < mxn; j += i) {
                sieve[j] = true;
            }
        }
    }