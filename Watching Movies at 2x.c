#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", & x, & y);
    x = x - y;
    y = y / 2;
    printf("%d\n", x + y);
    return 0;
}
