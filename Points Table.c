#include <stdio.h>

int main() {
    int x, y, a, b;
    scanf("%d %d %d %d", & x, & y, & a, & b);
    if (x > a) {
        printf("ALICE");
    }
    else if (x < a) {
        printf("BOB");
    }
    else if (x == a) {
        if (y > b) {
            printf("ALICE");
        }
        else if (y < b) {
            printf("BOB");
        }
        else if (y == b) {
            printf("ALICE");
        }
    }
    return 0;
}
