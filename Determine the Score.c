#include <stdio.h>

int main() {
    int x, n, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & x, & n);
        x = x / 10;

        printf("%d\n", n * x);
    }
    return 0;
}
