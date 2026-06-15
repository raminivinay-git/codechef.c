#include <stdio.h>

int main() {
    int N, K, R;
    scanf("%d %d %d", &N, &K, &R);

    printf("%d\n", (N - K) * R);

    return 0;
}
