#include <stdio.h>

int main() {
    int N;
    scanf("%d", & N);

    if (N % 3 == 0)
        printf("%d\n", N);
    else if (N % 3 == 1)
        printf("%d\n", N - 1);
    else
        printf("%d\n", N + 1);

    return 0;
}
