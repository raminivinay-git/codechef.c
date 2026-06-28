#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int x, y, z;
        scanf("%d %d %d", & x, & y, & z);
        int dimen = x * y;
        z = z / 2;
        if (dimen <= z) {
            printf("%d\n", z / dimen);
        }
        else {
            printf("0\n");
        }
    }
    return 0;
}
