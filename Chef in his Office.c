#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int x, y;
        scanf("%d %d", & x, & y);
        printf("%d\n", (4 * x) + y);
    }
    return 0;
}
