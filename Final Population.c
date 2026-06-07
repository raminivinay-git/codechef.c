#include <stdio.h>

int main() {
    int x, y, z, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d %d", & x, & y, & z);
        printf("%d\n", (x - y) + z);
    }
    return 0;
}
