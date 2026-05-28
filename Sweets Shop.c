#include <stdio.h>

int main() {
    int x, n;
    scanf("%d %d", & x, & n);
    x = x - (n * 10);
    if (x >= 20) {
        printf("%d\n", x / 20);
    }
    else {
        printf("0\n");
    }
    return 0;
}
