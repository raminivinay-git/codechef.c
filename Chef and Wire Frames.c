#include <stdio.h>

int main() {
    int n, m, x, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d %d", & n, & m, & x);
        int rect = 2 * (n + m);
        printf("%d\n", x * rect);
    }
    return 0;
}
