#include <stdio.h>

int main() {
    int x, y, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & x, & y);
        if (x > y) {
            printf("NEW PHONE\n");
        }
        else if (x < y) {
            printf("REPAIR\n");
        }
        else {
            printf("ANY\n");
        }
    }
    return 0;
}
