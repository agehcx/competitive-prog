#include <stdio.h>

#define __USE_MINGW_ANSI_STDIO 0

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        char id[14];
        scanf("%s", &id);
        int x = 0;
        for (int j = 0; j < 12; j++) {
            x += (id[j] - '0')  * (13 - j);
        }
        x = x % 11;
        int Nl = (11 - x) % 10;
        if (Nl == id[12] - '0') {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }
}