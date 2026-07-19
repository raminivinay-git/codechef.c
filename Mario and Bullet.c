#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int x, y, z;
        scanf("%d %d %d", & x, & y, & z);
        int speed = y / x;
        z = z - speed;
        if (z < 0)
            z = 0;
        printf("%d\n", z);

    }
    return 0;
}
