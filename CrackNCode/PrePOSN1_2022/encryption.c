#include <stdio.h>

#define __USE_MINGW_ANSI_STDIO 0

int main() {
    long long int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%lld", &arr[i]);
    }
    for (int i = 0; i < 5; i++) {
        long long x[65], tmp[64];
        for (int j = 0; j < 64; j++) {
            tmp[j] = 0;
            x[j] = 0;
        }
        long long idx = 0;
        long long sum = 0;
        while (arr[i] != 0) {
            tmp[idx++] = arr[i] % 2;
            arr[i] /= 2;
        }
        for (int j = 0; j < 64; j++) {
            x[j] = tmp[63 - j];
            // printf("%d", x[j]);
        }
        long long bt = 0;
        for (int j = 0; j < 65; j++) {
            if (x[j] == 1 && bt == 0) {
                bt = 1;
            } else if (x[j] == 1) {
                bt *= 2;
                bt += 1;
            } else if (j == 64 && bt > 0) {
                sum += bt;
            } else {
                sum += bt;
                bt = 0;
            }
        }
        printf("%lld\n", sum);
    }
}