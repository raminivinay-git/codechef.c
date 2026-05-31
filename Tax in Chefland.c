#include <stdio.h>

int main() {
    int x, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d", & x);
        if (x <= 100) {
            printf("%d\n", x);
        }
        else {
            printf("%d\n", x - 10);
        }
    }
    return 0;
}
