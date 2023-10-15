#include <stdio.h>

#define __USE_MINGW_ANSI_STDIO 0

int main() {
    int Q;
    scanf("%d", &Q);
    for (int it = 0; it < Q; it++) {
        int N;
        scanf("%d", &N);
        int c = 0;
        int sz = (N - 3) / 4;
        if (((N - 3) / 2) % 2 == 1) sz++;
        int cz = sz;
        for (int i = 0; i < cz; i++) {
            for (int j = 0; j < sz; j++) {
                printf(".");
            }
            for (int j = 0; j < (N-3)/2 - 2*(sz-1); j++) {
                printf("#");
            }
            for (int i = 0; i < (sz)*2-1; i++) {
                printf(".");
            }
            for (int j = 0; j < (N - 3) / 2 - 2 * (sz - 1); j++) {
                printf("#");
            }
            for (int j = 0; j < sz; j++) {
                printf(".");
            }
            printf("\n");
            sz--;
        }
        c = 0;
        for (int i = 0; i < (N + 1) / 2; i++) {
            for (int j = 0; j < c; j++) {
                printf(".");
            }
            for (int j = 0; j < N - 2 * c; j++) {
                printf("#");
            }
            for (int j = 0; j < c; j++) {
                printf(".");
            }
            printf("\n");
            c++;
        }
    }
}