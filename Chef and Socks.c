#include <stdio.h>

int main() {
    int a, x, y;
    scanf("%d %d %d", & a, & x, & y);
    if (x + y >= a) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
