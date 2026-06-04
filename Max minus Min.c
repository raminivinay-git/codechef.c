#include <stdio.h>

int main() {
    int a, b, c, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d %d", & a, & b, & c);
        printf("%d\n", c - a);
    }
    return 0;
}
