#include <stdio.h>

int main() {
    int x, y, n, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d %d", & n, & x, & y);
        if ((x * y) >= n) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
