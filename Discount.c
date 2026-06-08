#include <stdio.h>

int main() {
    int x, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d", & x);
        printf("%d\n", 100 - x);
    }
    return 0;
}
