#include <stdio.h>

int main() {
    int a, b, c, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d %d", & a, & b, & c);
        if (a > b && a > c) {
            printf("ALICE\n");
        }
        else if (b > a && b > c) {
            printf("BOB\n");
        }
        else {
            printf("CHARLIE\n");
        }
    }
    return 0;
}
