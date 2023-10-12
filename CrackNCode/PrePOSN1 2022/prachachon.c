#include <stdio.h>

// #define __USE_MINGW_ANSI_STDIO 0

int main() {
    int N; 
    scanf("%d",&N);
    int i,j,k,l;
    for(i = 0; i < N; i++) {
        char id[13];
        scanf("%s",&id);
        printf("%s\n",id);
    }

}