#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", & x, & y, & z);
    if (x < (y * z)) {
        printf("-1\n");
    }
    else {
        printf("%d\n", x - (y * z));
    }
    return 0;
}
