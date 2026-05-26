#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", & a, & b);
    a = 4 * (a + 1);
    b = 3 * b;
    printf("%d", (a + b + 7) / 8);
    return 0;
}
