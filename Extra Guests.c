#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", & x, & y);
    y = y - x;
    printf("%d", x * 100 + y * 150);
    return 0;

}
