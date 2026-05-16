#include <stdio.h>

int main() {
    int coin;
    int r, b, p, q;
    scanf("%d %d %d %d", & r, & b, & p, & q);
    r = r * p;
    b = b * q;
    if (r > b) {
        printf("%d", r);
    }
    else {
        printf("%d", b);
    }
    return 0;
}
