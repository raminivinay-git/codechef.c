#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, x, y;
        int count = 0;
        scanf("%d %d %d", & n, & x, & y);
        if (y % x == 0 && ((x * n) >= y)) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
