#include <stdio.h>

int main() {
    int x, a, b;
    scanf("%d %d %d", & x, & a, & b);
    if (x >= (a + b)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
