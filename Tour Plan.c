#include <stdio.h>

int main() {
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);

    if (Z <= 50)
        printf("%d\n", X);
    else
        printf("%d\n", X + (Z - 50) * Y);

    return 0;
}
