#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);

    while (t--) {
        int x, y, z;
        scanf("%d %d %d", & x, & y, & z);
        int total = (x * 5) + y * 10;
        printf("%d\n", total / z);
    }
    return 0;
}
