#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", & x, & y);
    if (x >= y) {
        printf("0");
    }
    else {
        printf("%d\n", (y - 1) / x);
    }
    return 0;

}
