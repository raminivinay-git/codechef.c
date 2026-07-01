#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);

    while (t--) {
        int x, y, z;
        scanf("%d %d %d", & x, & y, & z);

        int refills;

        if (x % y == 0)
            refills = x / y;
        else
            refills = x / y + 1;

        printf("%d\n", refills * z);
    }

    return 0;
}
