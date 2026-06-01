#include <stdio.h>

int main() {
    int x, y, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & x, & y);
        int X = x * 10;
        int Y = y * 90;
        printf("%d\n", X + Y);
    }
    return 0;
}
