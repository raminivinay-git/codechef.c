#include <stdio.h>

int main() {
    int x, y, n, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d %d", & n, & x, & y);
        int X = (x * 1) + (2 * y);
        if (n >= X) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
