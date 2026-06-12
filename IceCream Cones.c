#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int x, y, n;
        scanf("%d %d %d", & x, & y, & n);
        if (x < (y * n)) {
            printf("0\n");
        }
        else {
            printf("%d\n", x - (y * n));
        }
    }
    return 0;
}
