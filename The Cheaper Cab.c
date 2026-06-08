#include <stdio.h>

int main() {
    int x, y, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & x, & y);
        if (x > y) {
            printf("SECOND\n");
        }
        else if (x == y) {
            printf("ANY\n");
        }
        else {
            printf("FIRST\n");
        }
    }
    return 0;
}
