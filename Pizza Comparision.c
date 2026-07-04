#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int a, b;
        scanf("%d %d", & a, & b);
        b = (100 * b);
        a = (225 * a);
        if (a > b) {
            printf("LARGE\n");
        }
        else if (a < b) {
            printf("SMALL\n");
        }
        else {
            printf("EQUAL\n");
        }
    }
    return 0;
}
