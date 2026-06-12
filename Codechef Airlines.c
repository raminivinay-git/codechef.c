#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int x, y, z;
        scanf("%d %d %d", & x, & y, & z);
        x = x * 10;
        if (x >= y) {
            printf("%d\n", y * z);
        }
        else {
            printf("%d\n", x * z);
        }
    }
    return 0;
}
