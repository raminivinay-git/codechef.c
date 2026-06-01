#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", & x, & y, & z);
    z = x + z;
    if (y > z) {
        printf("0");
    }
    else {
        printf("%d", (z - y) + 1);
    }
    return 0;
}
