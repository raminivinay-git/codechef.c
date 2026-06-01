#include <stdio.h>

int main() {
    int x, y, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & x, & y);
        if (x > y) {
            printf("LOSS\n");
        }
        else if (x < y) {
            printf("PROFIT\n");
        }
        else {
            printf("NEUTRAL\n");
        }
    }
    return 0;
}
