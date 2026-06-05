#include <stdio.h>

int main() {
    int g, b, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & g, & b);
        printf("%d\n", b - g);
    }
    return 0;
}
