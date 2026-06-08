#include <stdio.h>

int main() {
    int x, y, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & x, & y);
        int doublee = 3 * x;
        int triple = 2 * y;
        if (doublee > triple) {
            printf("%d\n", triple);
        }
        else {
            printf("%d\n", doublee);
        }
    }
    return 0;
}
