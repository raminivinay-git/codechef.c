#include <stdio.h>

int main() {
    int x, y, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & x, & y);
        if (x < y) {
            printf("0\n");
        }
        else {
            printf("%d\n", x - y);
        }
    }
    return 0;
}
