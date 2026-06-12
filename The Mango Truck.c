#include <stdio.h>

int main() {
    int x, y, z, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d %d", & x, & y, & z);
        z = z - y;
        printf("%d\n", z / x);
    }
    return 0;
}
