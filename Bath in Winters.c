#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int x, y;
        scanf("%d %d", & x, & y);
        y = y * 2;
        if (x < y) {
            printf("0\n");
        }
        else {
            x = x / y;
            printf("%d\n", x);
        }
    }
    return 0;
}
