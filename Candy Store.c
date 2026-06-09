#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);

    while (t--) {
        int x, y;
        scanf("%d %d", & x, & y);
        if (y > x) {
            y = y - x;
            printf("%d\n", x + (y * 2));
        }
        else {
            printf("%d\n", y * 1);
        }
    }
    return 0;
}
