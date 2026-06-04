#include <stdio.h>

int main() {

    int N, M;
    scanf("%d %d", & N, & M);
    if (N * 2 <= M) {
        printf("%d", N);
    }
    else {
        printf("%d", M - N);
    }
    return 0;
}
