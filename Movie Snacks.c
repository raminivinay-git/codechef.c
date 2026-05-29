#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", & x, & y, & z);
    if ((x + y) >= z) {
        printf("%d\n", z = (2 * z) + y);
    }
    else {
        printf("%d\n", x = (2 * x) + (3 * y));
    }
    return 0;
}
