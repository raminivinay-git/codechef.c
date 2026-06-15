#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int x, y;
        scanf("%d %d", & x, & y);
        if ((x * y) >= 100) {
            printf("%d\n", (x * y) / 100);
        }
        else {
            printf("0\n");
        }
    }
    return 0;
}
