#include <stdio.h>

int main() {
    long long X, Y;
    scanf("%lld %lld", &X, &Y);

    long long total = X * 5000 + Y * 9800;

    printf("%lld\n", total);

    return 0;
}
