#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);

    while (t--) {
        int c, x, y;
        scanf("%d %d %d", & c, & x, & y);

        int need = c - x;

        if (need <= 0)
            printf("0\n");
        else
            printf("%d\n", need * y);
    }

    return 0;
}
