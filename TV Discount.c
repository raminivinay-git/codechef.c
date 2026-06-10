#include <stdio.h>

int main() {
    int a, b, c, d, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d %d %d", & a, & b, & c, & d);
        if ((a - c) > (b - d)) {
            printf("SECOND\n");
        }
        else if ((a - c) < (b - d)) {
            printf("FIRST\n");
        }
        else {
            printf("ANY\n");
        }
    }
    return 0;
}
