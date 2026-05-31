#include <stdio.h>

int main() {
    int n, m, x, y;
    scanf("%d %d %d %d", & n, & m, & x, & y);
    int N, M;
    N = n * x;
    M = m * y;
    printf("%d", N + M);
    return 0;
}
