#include <stdio.h>

int main() {
    int n, x, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & n, & x);

        printf("%d\n", n - x);
    }
    return 0;
}
