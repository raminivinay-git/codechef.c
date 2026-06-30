#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int a, b;
        scanf("%d %d", & a, & b);
        a = 100 - a;
        b = 100 - b;
        b = 2 * b;
        if (a < b) {
            printf("FIRST\n");
        }
        else if (a == b) {
            printf("BOTH\n");
        }
        else {
            printf("SECOND\n");
        }
    }
    return 0;
}
