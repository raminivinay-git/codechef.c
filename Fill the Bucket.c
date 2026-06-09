#include <stdio.h>

int main() {
    int k, x, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & k, & x);
        printf("%d\n", (k - x));
    }
    return 0;
}
